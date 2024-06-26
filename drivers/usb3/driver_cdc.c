/**
 * MIT License
 *
 * Copyright (c) 2024 Heisenberg
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * @author Heisenberg
 * @file driver_cdc.c

 */

#include <io.h>
#include <driver.h>

#include <assert.h>
#include <stdlib.h>
#include <string.h>
// #include <sys/_endian.h>

#include <config.h>

#include <libusbserial.h>



/**
 * @brief Let's define some useful macros for the  CDC driver.
*/

#define ARDUINO_VENDOR_ID            0x2341
#define QINHENG_VENDOR_ID            0x1A86

#define CDC_DEVICE_CH9102F           0x55D4

#define CDC_DEVICE_CLASS             0x02
#define CDC_ACM_DEVICE_SUBCLASS      0x02

#define CDC_REQTYPE_HOST2DEVICE      0x21
#define CDC_REQTYPE_DEVICE2HOST      0xA1

#define CDC_REQ_SET_LINE_CODING      0x20
#define CDC_REQ_GET_LINE_CODING      0x21
#define CDC_REQ_SET_LINE_CONTROL     0x22

#define CDC_CONTROL_LINE_STATE_RTS   0x2
#define CDC_CONTROL_LINE_STATE_DTR   0x1

#define USB_CLASS_CDC_DATA           0x0a

static const char* CDC_DEVICE_NAME_ARDUINO = "CDC Arduino";
static const char* CDC_DEVICE_NAME_QINHENG = "CDC Qinheng";
static const char* CDC_DEVICE_NAME_CDC_ACM = "CDC";


static inline int cdc_ctrl(struct usbserial_port *port,uint16_t req,uint16_t value,void *data,uint16_t size){
    return libusb_control_transfer(
            port->usb_dev_hdl,
            CDC_REQTYPE_HOST2DEVICE,
            req,
            value,
            0,
            data,
            size,
            DEFAULT_CONTROL_TIMEOUT_MILLIS);
}

static int cdc_set_dtr_rts(
        struct usbserial_port *port,
        int dtr,
        int rts)
{
    assert(port);

    int control = 0;
    if (dtr) control |= CDC_CONTROL_LINE_STATE_DTR;
    if (rts) control |= CDC_CONTROL_LINE_STATE_RTS;

    return cdc_ctrl(port, CDC_REQ_SET_LINE_CONTROL, control, NULL, 0);
}

static int cdc_check_supported_by_vid_pid(uint16_t vid, uint16_t pid)
{
    if (QINHENG_VENDOR_ID == vid && CDC_DEVICE_CH9102F == pid)
		return 1;

	return 0;
}

static int cdc_check_supported_by_class(uint8_t class, uint8_t subclass)
{
    /* Arduino compatible devices report 0 as subclass,
     * which is against the CDC specification :-|| */
    return ((CDC_DEVICE_CLASS == class)
            && ((CDC_ACM_DEVICE_SUBCLASS == subclass)
                || (0 == subclass)));
}

static const char* cdc_get_device_name(uint16_t vid, uint16_t pid, uint8_t class, uint8_t subclass)
{
    switch (vid)
    {
    case ARDUINO_VENDOR_ID: return CDC_DEVICE_NAME_ARDUINO;
    case QINHENG_VENDOR_ID: return CDC_DEVICE_NAME_QINHENG;
    default: return CDC_DEVICE_NAME_CDC_ACM;
    }
}

static unsigned int cdc_get_ports_count(uint16_t vid, uint16_t pid)
{
    /* Are there any multiport CDC/ACM or Prolific devices out there? */
    return 1;
}

static int cdc_port_init(struct usbserial_port *port)
{
    assert(port);

    int ret = usbserial_io_get_endpoint(port, USB_CLASS_CDC_DATA);
    if (ret)
        return ret;

    cdc_set_dtr_rts(port, 0, 0);

    return 0;
}

static int cdc_port_deinit(struct usbserial_port *port)
{
    assert(port);

    return usbserial_io_free_endpoint(port);
}

static int cdc_port_set_config(struct usbserial_port *port, const struct usbserial_config* config)
{
    assert(port);
    assert(config);

    int ret;
    unsigned char data[7];
    unsigned char stop_bits_byte, parity_byte, data_bits_byte;
    uint32_t baud_le = htole32((uint32_t)config->baud);

    switch (config->stopbits)
    {
    case USBSERIAL_STOPBITS_1: stop_bits_byte = 0; break;
    case USBSERIAL_STOPBITS_1_5: stop_bits_byte = 1; break;
    case USBSERIAL_STOPBITS_2: stop_bits_byte = 2; break;

    default: return USBSERIAL_ERROR_INVALID_PARAMETER;
    }

    switch (config->parity)
    {
    case USB_SERIAL_PARITY_NONE: parity_byte = 0; break;
    case USB_PARITY_ODD: parity_byte = 1; break;
    case USB_PARITY_EVEN: parity_byte = 2; break;
    case USB_PARITY_MARK: parity_byte = 3; break;
    case USB_PARITY_SPACE: parity_byte = 4; break;

    default: return USBSERIAL_ERROR_INVALID_PARAMETER;
    }

    data_bits_byte = (unsigned char) config->databits;

    memcpy(data, &baud_le, sizeof(baud_le));
    data[4] = stop_bits_byte;
    data[5] = parity_byte;
    data[6] = data_bits_byte;

    ret = cdc_ctrl(port, CDC_REQ_SET_LINE_CODING, 0, data, sizeof(data));
    if (ret > 0)
    {
        if (ret == sizeof(data)) 
            return 0;
        return USBSERIAL_ERROR_CTRL_CMD_FAILED;
    }
    
    return ret;
}

static int cdc_start_reader(struct usbserial_port *port)
{
    assert(port);
    assert(port->cb_read);

    return usbserial_io_init_bulk_read_transfer(port);
}

static int cdc_stop_reader(struct usbserial_port *port)
{
    assert(port);

    return usbserial_io_cancel_bulk_read_transfer(port);
}

static int cdc_read(struct usbserial_port *port, void *data, size_t size, int timeout)
{
    assert(port);

    return usbserial_io_bulk_read(port, data, size, timeout);
}

static int cdc_write(struct usbserial_port *port, const void *data, size_t size)
{
    assert(port);

    return usbserial_io_bulk_write(port, data, size);
}

static int cdc_purge(struct usbserial_port *port, int rx, int tx)
{
    assert(port);
    
    return USBSERIAL_ERROR_UNSUPPORTED_OPERATION;
}

struct usbserial_driver driver_cdc =
{
    .check_supported_by_vid_pid = cdc_check_supported_by_vid_pid,
    .check_supported_by_class = cdc_check_supported_by_class,
    .get_device_name = cdc_get_device_name,
    .get_ports_count = cdc_get_ports_count,
    .port_init = cdc_port_init,
    .port_deinit = cdc_port_deinit,
    .port_set_config = cdc_port_set_config,
    .start_reader = cdc_start_reader,
    .stop_reader = cdc_stop_reader,
    .read = cdc_read,
    .write = cdc_write,
    .purge = cdc_purge,
    .set_dtr_rts = cdc_set_dtr_rts,
    .read_data_process = NULL,
};

struct usbserial_driver *usbserial_driver_cdc = &driver_cdc;