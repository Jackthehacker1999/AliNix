/*
 * Register definitions for Rockchip's RK808/RK818 PMIC
 *
 * Copyright (c) 2014, Fuzhou Rockchip Electronics Co., Ltd
 *
 * Author: Chris Zhong <zyw@rock-chips.com>
 * Author: Zhang Qing <zhangqing@rock-chips.com>
 *
 * Copyright (C) 2016 PHYTEC Messtechnik GmbH
 *
 * Author: Wadim Egorov <w.egorov@phytec.de>
 */

#ifndef __HEISEN_REGULATOR_RK808_H
#define __HEISEN_REGULATOR_RK808_H

#include <heisen/regulator/machine.h>
#include <heisen/regmap.h>

/*
 * rk808 Global Register Map.
 */

#define RK808_DCDC1	0 /* (0+RK808_START) */
#define RK808_LDO1	4 /* (4+RK808_START) */
#define RK808_NUM_REGULATORS	14

enum rk808_reg {
	RK808_ID_DCDC1,
	RK808_ID_DCDC2,
	RK808_ID_DCDC3,
	RK808_ID_DCDC4,
	RK808_ID_LDO1,
	RK808_ID_LDO2,
	RK808_ID_LDO3,
	RK808_ID_LDO4,
	RK808_ID_LDO5,
	RK808_ID_LDO6,
	RK808_ID_LDO7,
	RK808_ID_LDO8,
	RK808_ID_SWITCH1,
	RK808_ID_SWITCH2,
};

#define RK808_SECONDS_REG	0x00
#define RK808_MINUTES_REG	0x01
#define RK808_HOURS_REG		0x02
#define RK808_DAYS_REG		0x03
#define RK808_MONTHS_REG	0x04
#define RK808_YEARS_REG		0x05
#define RK808_WEEKS_REG		0x06
#define RK808_ALARM_SECONDS_REG	0x08
#define RK808_ALARM_MINUTES_REG	0x09
#define RK808_ALARM_HOURS_REG	0x0a
#define RK808_ALARM_DAYS_REG	0x0b
#define RK808_ALARM_MONTHS_REG	0x0c
#define RK808_ALARM_YEARS_REG	0x0d
#define RK808_RTC_CTRL_REG	0x10
#define RK808_RTC_STATUS_REG	0x11
#define RK808_RTC_INT_REG	0x12
#define RK808_RTC_COMP_LSB_REG	0x13
#define RK808_RTC_COMP_MSB_REG	0x14
#define RK808_ID_MSB		0x17
#define RK808_ID_LSB		0x18
#define RK808_CLK32OUT_REG	0x20
#define RK808_VB_MON_REG	0x21
#define RK808_THERMAL_REG	0x22
#define RK808_DCDC_EN_REG	0x23
#define RK808_LDO_EN_REG	0x24
#define RK808_SLEEP_SET_OFF_REG1	0x25
#define RK808_SLEEP_SET_OFF_REG2	0x26
#define RK808_DCDC_UV_STS_REG	0x27
#define RK808_DCDC_UV_ACT_REG	0x28
#define RK808_LDO_UV_STS_REG	0x29
#define RK808_LDO_UV_ACT_REG	0x2a
#define RK808_DCDC_PG_REG	0x2b
#define RK808_LDO_PG_REG	0x2c
#define RK808_VOUT_MON_TDB_REG	0x2d
#define RK808_BUCK1_CONFIG_REG		0x2e
#define RK808_BUCK1_ON_VSEL_REG		0x2f
#define RK808_BUCK1_SLP_VSEL_REG	0x30
#define RK808_BUCK1_DVS_VSEL_REG	0x31
#define RK808_BUCK2_CONFIG_REG		0x32
#define RK808_BUCK2_ON_VSEL_REG		0x33
#define RK808_BUCK2_SLP_VSEL_REG	0x34
#define RK808_BUCK2_DVS_VSEL_REG	0x35
#define RK808_BUCK3_CONFIG_REG		0x36
#define RK808_BUCK4_CONFIG_REG		0x37
#define RK808_BUCK4_ON_VSEL_REG		0x38
#define RK808_BUCK4_SLP_VSEL_REG	0x39
#define RK808_BOOST_CONFIG_REG		0x3a
#define RK808_LDO1_ON_VSEL_REG		0x3b
#define RK808_LDO1_SLP_VSEL_REG		0x3c
#define RK808_LDO2_ON_VSEL_REG		0x3d
#define RK808_LDO2_SLP_VSEL_REG		0x3e
#define RK808_LDO3_ON_VSEL_REG		0x3f
#define RK808_LDO3_SLP_VSEL_REG		0x40
#define RK808_LDO4_ON_VSEL_REG		0x41
#define RK808_LDO4_SLP_VSEL_REG		0x42
#define RK808_LDO5_ON_VSEL_REG		0x43
#define RK808_LDO5_SLP_VSEL_REG		0x44
#define RK808_LDO6_ON_VSEL_REG		0x45
#define RK808_LDO6_SLP_VSEL_REG		0x46
#define RK808_LDO7_ON_VSEL_REG		0x47
#define RK808_LDO7_SLP_VSEL_REG		0x48
#define RK808_LDO8_ON_VSEL_REG		0x49
#define RK808_LDO8_SLP_VSEL_REG		0x4a
#define RK808_DEVCTRL_REG	0x4b
#define RK808_INT_STS_REG1	0x4c
#define RK808_INT_STS_MSK_REG1	0x4d
#define RK808_INT_STS_REG2	0x4e
#define RK808_INT_STS_MSK_REG2	0x4f
#define RK808_IO_POL_REG	0x50

/* RK818 */
#define RK818_DCDC1			0
#define RK818_LDO1			4
#define RK818_NUM_REGULATORS		17

enum rk818_reg {
	RK818_ID_DCDC1,
	RK818_ID_DCDC2,
	RK818_ID_DCDC3,
	RK818_ID_DCDC4,
	RK818_ID_BOOST,
	RK818_ID_LDO1,
	RK818_ID_LDO2,
	RK818_ID_LDO3,
	RK818_ID_LDO4,
	RK818_ID_LDO5,
	RK818_ID_LDO6,
	RK818_ID_LDO7,
	RK818_ID_LDO8,
	RK818_ID_LDO9,
	RK818_ID_SWITCH,
	RK818_ID_HDMI_SWITCH,
	RK818_ID_OTG_SWITCH,
};

#define RK818_DCDC_EN_REG		0x23
#define RK818_LDO_EN_REG		0x24
#define RK818_SLEEP_SET_OFF_REG1	0x25
#define RK818_SLEEP_SET_OFF_REG2	0x26
#define RK818_DCDC_UV_STS_REG		0x27
#define RK818_DCDC_UV_ACT_REG		0x28
#define RK818_LDO_UV_STS_REG		0x29
#define RK818_LDO_UV_ACT_REG		0x2a
#define RK818_DCDC_PG_REG		0x2b
#define RK818_LDO_PG_REG		0x2c
#define RK818_VOUT_MON_TDB_REG		0x2d
#define RK818_BUCK1_CONFIG_REG		0x2e
#define RK818_BUCK1_ON_VSEL_REG		0x2f
#define RK818_BUCK1_SLP_VSEL_REG	0x30
#define RK818_BUCK2_CONFIG_REG		0x32
#define RK818_BUCK2_ON_VSEL_REG		0x33
#define RK818_BUCK2_SLP_VSEL_REG	0x34
#define RK818_BUCK3_CONFIG_REG		0x36
#define RK818_BUCK4_CONFIG_REG		0x37
#define RK818_BUCK4_ON_VSEL_REG		0x38
#define RK818_BUCK4_SLP_VSEL_REG	0x39
#define RK818_BOOST_CONFIG_REG		0x3a
#define RK818_LDO1_ON_VSEL_REG		0x3b
#define RK818_LDO1_SLP_VSEL_REG		0x3c
#define RK818_LDO2_ON_VSEL_REG		0x3d
#define RK818_LDO2_SLP_VSEL_REG		0x3e
#define RK818_LDO3_ON_VSEL_REG		0x3f
#define RK818_LDO3_SLP_VSEL_REG		0x40
#define RK818_LDO4_ON_VSEL_REG		0x41
#define RK818_LDO4_SLP_VSEL_REG		0x42
#define RK818_LDO5_ON_VSEL_REG		0x43
#define RK818_LDO5_SLP_VSEL_REG		0x44
#define RK818_LDO6_ON_VSEL_REG		0x45
#define RK818_LDO6_SLP_VSEL_REG		0x46
#define RK818_LDO7_ON_VSEL_REG		0x47
#define RK818_LDO7_SLP_VSEL_REG		0x48
#define RK818_LDO8_ON_VSEL_REG		0x49
#define RK818_LDO8_SLP_VSEL_REG		0x4a
#define RK818_BOOST_LDO9_ON_VSEL_REG	0x54
#define RK818_BOOST_LDO9_SLP_VSEL_REG	0x55
#define RK818_DEVCTRL_REG		0x4b
#define RK818_INT_STS_REG1		0X4c
#define RK818_INT_STS_MSK_REG1		0x4d
#define RK818_INT_STS_REG2		0x4e
#define RK818_INT_STS_MSK_REG2		0x4f
#define RK818_IO_POL_REG		0x50
#define RK818_H5V_EN_REG		0x52
#define RK818_SLEEP_SET_OFF_REG3	0x53
#define RK818_BOOST_LDO9_ON_VSEL_REG	0x54
#define RK818_BOOST_LDO9_SLP_VSEL_REG	0x55
#define RK818_BOOST_CTRL_REG		0x56
#define RK818_DCDC_ILMAX		0x90
#define RK818_USB_CTRL_REG		0xa1

#define RK818_H5V_EN			BIT(0)
#define RK818_REF_RDY_CTRL		BIT(1)
#define RK818_USB_ILIM_SEL_MASK		0xf
#define RK818_USB_ILMIN_2000MA		0x7
#define RK818_USB_CHG_SD_VSEL_MASK	0x70

/* RK805 */
enum rk805_reg {
	RK805_ID_DCDC1,
	RK805_ID_DCDC2,
	RK805_ID_DCDC3,
	RK805_ID_DCDC4,
	RK805_ID_LDO1,
	RK805_ID_LDO2,
	RK805_ID_LDO3,
};

/* CONFIG REGISTER */
#define RK805_VB_MON_REG		0x21
#define RK805_THERMAL_REG		0x22

/* POWER CHANNELS ENABLE REGISTER */
#define RK805_DCDC_EN_REG		0x23
#define RK805_SLP_DCDC_EN_REG		0x25
#define RK805_SLP_LDO_EN_REG		0x26
#define RK805_LDO_EN_REG		0x27

/* BUCK AND LDO CONFIG REGISTER */
#define RK805_BUCK_LDO_SLP_LP_EN_REG	0x2A
#define RK805_BUCK1_CONFIG_REG		0x2E
#define RK805_BUCK1_ON_VSEL_REG		0x2F
#define RK805_BUCK1_SLP_VSEL_REG	0x30
#define RK805_BUCK2_CONFIG_REG		0x32
#define RK805_BUCK2_ON_VSEL_REG		0x33
#define RK805_BUCK2_SLP_VSEL_REG	0x34
#define RK805_BUCK3_CONFIG_REG		0x36
#define RK805_BUCK4_CONFIG_REG		0x37
#define RK805_BUCK4_ON_VSEL_REG		0x38
#define RK805_BUCK4_SLP_VSEL_REG	0x39
#define RK805_LDO1_ON_VSEL_REG		0x3B
#define RK805_LDO1_SLP_VSEL_REG		0x3C
#define RK805_LDO2_ON_VSEL_REG		0x3D
#define RK805_LDO2_SLP_VSEL_REG		0x3E
#define RK805_LDO3_ON_VSEL_REG		0x3F
#define RK805_LDO3_SLP_VSEL_REG		0x40

/* INTERRUPT REGISTER */
#define RK805_PWRON_LP_INT_TIME_REG	0x47
#define RK805_PWRON_DB_REG		0x48
#define RK805_DEV_CTRL_REG		0x4B
#define RK805_INT_STS_REG		0x4C
#define RK805_INT_STS_MSK_REG		0x4D
#define RK805_GPIO_IO_POL_REG		0x50
#define RK805_OUT_REG			0x52
#define RK805_ON_SOURCE_REG		0xAE
#define RK805_OFF_SOURCE_REG		0xAF

#define RK805_NUM_REGULATORS		7

#define RK805_PWRON_FALL_RISE_INT_EN	0x0
#define RK805_PWRON_FALL_RISE_INT_MSK	0x81

/* RK805 IRQ Definitions */
#define RK805_IRQ_PWRON_RISE		0
#define RK805_IRQ_VB_LOW		1
#define RK805_IRQ_PWRON			2
#define RK805_IRQ_PWRON_LP		3
#define RK805_IRQ_HOTDIE		4
#define RK805_IRQ_RTC_ALARM		5
#define RK805_IRQ_RTC_PERIOD		6
#define RK805_IRQ_PWRON_FALL		7

#define RK805_IRQ_PWRON_RISE_MSK	BIT(0)
#define RK805_IRQ_VB_LOW_MSK		BIT(1)
#define RK805_IRQ_PWRON_MSK		BIT(2)
#define RK805_IRQ_PWRON_LP_MSK		BIT(3)
#define RK805_IRQ_HOTDIE_MSK		BIT(4)
#define RK805_IRQ_RTC_ALARM_MSK		BIT(5)
#define RK805_IRQ_RTC_PERIOD_MSK	BIT(6)
#define RK805_IRQ_PWRON_FALL_MSK	BIT(7)

#define RK805_PWR_RISE_INT_STATUS	BIT(0)
#define RK805_VB_LOW_INT_STATUS		BIT(1)
#define RK805_PWRON_INT_STATUS		BIT(2)
#define RK805_PWRON_LP_INT_STATUS	BIT(3)
#define RK805_HOTDIE_INT_STATUS		BIT(4)
#define RK805_ALARM_INT_STATUS		BIT(5)
#define RK805_PERIOD_INT_STATUS		BIT(6)
#define RK805_PWR_FALL_INT_STATUS	BIT(7)

#define RK805_BUCK1_2_ILMAX_MASK	(3 << 6)
#define RK805_BUCK3_4_ILMAX_MASK        (3 << 3)
#define RK805_RTC_PERIOD_INT_MASK	(1 << 6)
#define RK805_RTC_ALARM_INT_MASK	(1 << 5)
#define RK805_INT_ALARM_EN		(1 << 3)
#define RK805_INT_TIMER_EN		(1 << 2)

/* RK806 */
#define RK806_POWER_EN0			0x0
#define RK806_POWER_EN1			0x1
#define RK806_POWER_EN2			0x2
#define RK806_POWER_EN3			0x3
#define RK806_POWER_EN4			0x4
#define RK806_POWER_EN5			0x5
#define RK806_POWER_SLP_EN0		0x6
#define RK806_POWER_SLP_EN1		0x7
#define RK806_POWER_SLP_EN2		0x8
#define RK806_POWER_DISCHRG_EN0		0x9
#define RK806_POWER_DISCHRG_EN1		0xA
#define RK806_POWER_DISCHRG_EN2		0xB
#define RK806_BUCK_FB_CONFIG		0xC
#define RK806_SLP_LP_CONFIG		0xD
#define RK806_POWER_FPWM_EN0		0xE
#define RK806_POWER_FPWM_EN1		0xF
#define RK806_BUCK1_CONFIG		0x10
#define RK806_BUCK2_CONFIG		0x11
#define RK806_BUCK3_CONFIG		0x12
#define RK806_BUCK4_CONFIG		0x13
#define RK806_BUCK5_CONFIG		0x14
#define RK806_BUCK6_CONFIG		0x15
#define RK806_BUCK7_CONFIG		0x16
#define RK806_BUCK8_CONFIG		0x17
#define RK806_BUCK9_CONFIG		0x18
#define RK806_BUCK10_CONFIG		0x19
#define RK806_BUCK1_ON_VSEL		0x1A
#define RK806_BUCK2_ON_VSEL		0x1B
#define RK806_BUCK3_ON_VSEL		0x1C
#define RK806_BUCK4_ON_VSEL		0x1D
#define RK806_BUCK5_ON_VSEL		0x1E
#define RK806_BUCK6_ON_VSEL		0x1F
#define RK806_BUCK7_ON_VSEL		0x20
#define RK806_BUCK8_ON_VSEL		0x21
#define RK806_BUCK9_ON_VSEL		0x22
#define RK806_BUCK10_ON_VSEL		0x23
#define RK806_BUCK1_SLP_VSEL		0x24
#define RK806_BUCK2_SLP_VSEL		0x25
#define RK806_BUCK3_SLP_VSEL		0x26
#define RK806_BUCK4_SLP_VSEL		0x27
#define RK806_BUCK5_SLP_VSEL		0x28
#define RK806_BUCK6_SLP_VSEL		0x29
#define RK806_BUCK7_SLP_VSEL		0x2A
#define RK806_BUCK8_SLP_VSEL		0x2B
#define RK806_BUCK9_SLP_VSEL		0x2D
#define RK806_BUCK10_SLP_VSEL		0x2E
#define RK806_BUCK_DEBUG1		0x30
#define RK806_BUCK_DEBUG2		0x31
#define RK806_BUCK_DEBUG3		0x32
#define RK806_BUCK_DEBUG4		0x33
#define RK806_BUCK_DEBUG5		0x34
#define RK806_BUCK_DEBUG6		0x35
#define RK806_BUCK_DEBUG7		0x36
#define RK806_BUCK_DEBUG8		0x37
#define RK806_BUCK_DEBUG9		0x38
#define RK806_BUCK_DEBUG10		0x39
#define RK806_BUCK_DEBUG11		0x3A
#define RK806_BUCK_DEBUG12		0x3B
#define RK806_BUCK_DEBUG13		0x3C
#define RK806_BUCK_DEBUG14		0x3D
#define RK806_BUCK_DEBUG15		0x3E
#define RK806_BUCK_DEBUG16		0x3F
#define RK806_BUCK_DEBUG17		0x40
#define RK806_BUCK_DEBUG18		0x41
#define RK806_NLDO_IMAX			0x42
#define RK806_NLDO1_ON_VSEL		0x43
#define RK806_NLDO2_ON_VSEL		0x44
#define RK806_NLDO3_ON_VSEL		0x45
#define RK806_NLDO4_ON_VSEL		0x46
#define RK806_NLDO5_ON_VSEL		0x47
#define RK806_NLDO1_SLP_VSEL		0x48
#define RK806_NLDO2_SLP_VSEL		0x49
#define RK806_NLDO3_SLP_VSEL		0x4A
#define RK806_NLDO4_SLP_VSEL		0x4B
#define RK806_NLDO5_SLP_VSEL		0x4C
#define RK806_PLDO_IMAX			0x4D
#define RK806_PLDO1_ON_VSEL		0x4E
#define RK806_PLDO2_ON_VSEL		0x4F
#define RK806_PLDO3_ON_VSEL		0x50
#define RK806_PLDO4_ON_VSEL		0x51
#define RK806_PLDO5_ON_VSEL		0x52
#define RK806_PLDO6_ON_VSEL		0x53
#define RK806_PLDO1_SLP_VSEL		0x54
#define RK806_PLDO2_SLP_VSEL		0x55
#define RK806_PLDO3_SLP_VSEL		0x56
#define RK806_PLDO4_SLP_VSEL		0x57
#define RK806_PLDO5_SLP_VSEL		0x58
#define RK806_PLDO6_SLP_VSEL		0x59
#define RK806_CHIP_NAME			0x5A
#define RK806_CHIP_VER			0x5B
#define RK806_OTP_VER			0x5C
#define RK806_SYS_STS			0x5D
#define RK806_SYS_CFG0			0x5E
#define RK806_SYS_CFG1			0x5F
#define RK806_SYS_OPTION		0x61
#define RK806_SLEEP_CONFIG0		0x62
#define RK806_SLEEP_CONFIG1		0x63
#define RK806_SLEEP_CTR_SEL0		0x64
#define RK806_SLEEP_CTR_SEL1		0x65
#define RK806_SLEEP_CTR_SEL2		0x66
#define RK806_SLEEP_CTR_SEL3		0x67
#define RK806_SLEEP_CTR_SEL4		0x68
#define RK806_SLEEP_CTR_SEL5		0x69
#define RK806_DVS_CTRL_SEL0		0x6A
#define RK806_DVS_CTRL_SEL1		0x6B
#define RK806_DVS_CTRL_SEL2		0x6C
#define RK806_DVS_CTRL_SEL3		0x6D
#define RK806_DVS_CTRL_SEL4		0x6E
#define RK806_DVS_CTRL_SEL5		0x6F
#define RK806_DVS_START_CTRL		0x70
#define RK806_SLEEP_GPIO		0x71
#define RK806_SYS_CFG3			0x72
#define RK806_ON_SOURCE			0x74
#define RK806_OFF_SOURCE		0x75
#define RK806_PWRON_KEY			0x76
#define RK806_INT_STS0			0x77
#define RK806_INT_MSK0			0x78
#define RK806_INT_STS1			0x79
#define RK806_INT_MSK1			0x7A
#define RK806_GPIO_INT_CONFIG		0x7B
#define RK806_DATA_REG0			0x7C
#define RK806_DATA_REG1			0x7D
#define RK806_DATA_REG2			0x7E
#define RK806_DATA_REG3			0x7F
#define RK806_DATA_REG4			0x80
#define RK806_DATA_REG5			0x81
#define RK806_DATA_REG6			0x82
#define RK806_DATA_REG7			0x83
#define RK806_DATA_REG8			0x84
#define RK806_DATA_REG9			0x85
#define RK806_DATA_REG10		0x86
#define RK806_DATA_REG11		0x87
#define RK806_DATA_REG12		0x88
#define RK806_DATA_REG13		0x89
#define RK806_DATA_REG14		0x8A
#define RK806_DATA_REG15		0x8B
#define RK806_TM_REG			0x8C
#define RK806_OTP_EN_REG		0x8D
#define RK806_FUNC_OTP_EN_REG		0x8E
#define RK806_TEST_REG1			0x8F
#define RK806_TEST_REG2			0x90
#define RK806_TEST_REG3			0x91
#define RK806_TEST_REG4			0x92
#define RK806_TEST_REG5			0x93
#define RK806_BUCK_VSEL_OTP_REG0	0x94
#define RK806_BUCK_VSEL_OTP_REG1	0x95
#define RK806_BUCK_VSEL_OTP_REG2	0x96
#define RK806_BUCK_VSEL_OTP_REG3	0x97
#define RK806_BUCK_VSEL_OTP_REG4	0x98
#define RK806_BUCK_VSEL_OTP_REG5	0x99
#define RK806_BUCK_VSEL_OTP_REG6	0x9A
#define RK806_BUCK_VSEL_OTP_REG7	0x9B
#define RK806_BUCK_VSEL_OTP_REG8	0x9C
#define RK806_BUCK_VSEL_OTP_REG9	0x9D
#define RK806_NLDO1_VSEL_OTP_REG0	0x9E
#define RK806_NLDO1_VSEL_OTP_REG1	0x9F
#define RK806_NLDO1_VSEL_OTP_REG2	0xA0
#define RK806_NLDO1_VSEL_OTP_REG3	0xA1
#define RK806_NLDO1_VSEL_OTP_REG4	0xA2
#define RK806_PLDO_VSEL_OTP_REG0	0xA3
#define RK806_PLDO_VSEL_OTP_REG1	0xA4
#define RK806_PLDO_VSEL_OTP_REG2	0xA5
#define RK806_PLDO_VSEL_OTP_REG3	0xA6
#define RK806_PLDO_VSEL_OTP_REG4	0xA7
#define RK806_PLDO_VSEL_OTP_REG5	0xA8
#define RK806_BUCK_EN_OTP_REG1		0xA9
#define RK806_NLDO_EN_OTP_REG1		0xAA
#define RK806_PLDO_EN_OTP_REG1		0xAB
#define RK806_BUCK_FB_RES_OTP_REG1	0xAC
#define RK806_OTP_RESEV_REG0		0xAD
#define RK806_OTP_RESEV_REG1		0xAE
#define RK806_OTP_RESEV_REG2		0xAF
#define RK806_OTP_RESEV_REG3		0xB0
#define RK806_OTP_RESEV_REG4		0xB1
#define RK806_BUCK_SEQ_REG0		0xB2
#define RK806_BUCK_SEQ_REG1		0xB3
#define RK806_BUCK_SEQ_REG2		0xB4
#define RK806_BUCK_SEQ_REG3		0xB5
#define RK806_BUCK_SEQ_REG4		0xB6
#define RK806_BUCK_SEQ_REG5		0xB7
#define RK806_BUCK_SEQ_REG6		0xB8
#define RK806_BUCK_SEQ_REG7		0xB9
#define RK806_BUCK_SEQ_REG8		0xBA
#define RK806_BUCK_SEQ_REG9		0xBB
#define RK806_BUCK_SEQ_REG10		0xBC
#define RK806_BUCK_SEQ_REG11		0xBD
#define RK806_BUCK_SEQ_REG12		0xBE
#define RK806_BUCK_SEQ_REG13		0xBF
#define RK806_BUCK_SEQ_REG14		0xC0
#define RK806_BUCK_SEQ_REG15		0xC1
#define RK806_BUCK_SEQ_REG16		0xC2
#define RK806_BUCK_SEQ_REG17		0xC3
#define RK806_HK_TRIM_REG1		0xC4
#define RK806_HK_TRIM_REG2		0xC5
#define RK806_BUCK_REF_TRIM_REG1	0xC6
#define RK806_BUCK_REF_TRIM_REG2	0xC7
#define RK806_BUCK_REF_TRIM_REG3	0xC8
#define RK806_BUCK_REF_TRIM_REG4	0xC9
#define RK806_BUCK_REF_TRIM_REG5	0xCA
#define RK806_BUCK_OSC_TRIM_REG1	0xCB
#define RK806_BUCK_OSC_TRIM_REG2	0xCC
#define RK806_BUCK_OSC_TRIM_REG3	0xCD
#define RK806_BUCK_OSC_TRIM_REG4	0xCE
#define RK806_BUCK_OSC_TRIM_REG5	0xCF
#define RK806_BUCK_TRIM_ZCDIOS_REG1	0xD0
#define RK806_BUCK_TRIM_ZCDIOS_REG2	0xD1
#define RK806_NLDO_TRIM_REG1		0xD2
#define RK806_NLDO_TRIM_REG2		0xD3
#define RK806_NLDO_TRIM_REG3		0xD4
#define RK806_PLDO_TRIM_REG1		0xD5
#define RK806_PLDO_TRIM_REG2		0xD6
#define RK806_PLDO_TRIM_REG3		0xD7
#define RK806_TRIM_ICOMP_REG1		0xD8
#define RK806_TRIM_ICOMP_REG2		0xD9
#define RK806_EFUSE_CONTROL_REGH	0xDA
#define RK806_FUSE_PROG_REG		0xDB
#define RK806_MAIN_FSM_STS_REG		0xDD
#define RK806_FSM_REG			0xDE
#define RK806_TOP_RESEV_OFFR		0xEC
#define RK806_TOP_RESEV_POR		0xED
#define RK806_BUCK_VRSN_REG1		0xEE
#define RK806_BUCK_VRSN_REG2		0xEF
#define RK806_NLDO_RLOAD_SEL_REG1	0xF0
#define RK806_PLDO_RLOAD_SEL_REG1	0xF1
#define RK806_PLDO_RLOAD_SEL_REG2	0xF2
#define RK806_BUCK_CMIN_MX_REG1		0xF3
#define RK806_BUCK_CMIN_MX_REG2		0xF4
#define RK806_BUCK_FREQ_SET_REG1	0xF5
#define RK806_BUCK_FREQ_SET_REG2	0xF6
#define RK806_BUCK_RS_MEABS_REG1	0xF7
#define RK806_BUCK_RS_MEABS_REG2	0xF8
#define RK806_BUCK_RS_ZDLEB_REG1	0xF9
#define RK806_BUCK_RS_ZDLEB_REG2	0xFA
#define RK806_BUCK_RSERVE_REG1		0xFB
#define RK806_BUCK_RSERVE_REG2		0xFC
#define RK806_BUCK_RSERVE_REG3		0xFD
#define RK806_BUCK_RSERVE_REG4		0xFE
#define RK806_BUCK_RSERVE_REG5		0xFF

/* INT_STS Register field definitions */
#define RK806_INT_STS_PWRON_FALL	BIT(0)
#define RK806_INT_STS_PWRON_RISE	BIT(1)
#define RK806_INT_STS_PWRON		BIT(2)
#define RK806_INT_STS_PWRON_LP		BIT(3)
#define RK806_INT_STS_HOTDIE		BIT(4)
#define RK806_INT_STS_VDC_RISE		BIT(5)
#define RK806_INT_STS_VDC_FALL		BIT(6)
#define RK806_INT_STS_VB_LO		BIT(7)
#define RK806_INT_STS_REV0		BIT(0)
#define RK806_INT_STS_REV1		BIT(1)
#define RK806_INT_STS_REV2		BIT(2)
#define RK806_INT_STS_CRC_ERROR		BIT(3)
#define RK806_INT_STS_SLP3_GPIO		BIT(4)
#define RK806_INT_STS_SLP2_GPIO		BIT(5)
#define RK806_INT_STS_SLP1_GPIO		BIT(6)
#define RK806_INT_STS_WDT		BIT(7)

/* SPI command */
#define RK806_CMD_READ			0
#define RK806_CMD_WRITE			BIT(7)
#define RK806_CMD_CRC_EN		BIT(6)
#define RK806_CMD_CRC_DIS		0
#define RK806_CMD_LEN_MSK		0x0f
#define RK806_REG_H			0x00

#define VERSION_AB		0x01

enum rk806_reg_id {
	RK806_ID_DCDC1 = 0,
	RK806_ID_DCDC2,
	RK806_ID_DCDC3,
	RK806_ID_DCDC4,
	RK806_ID_DCDC5,
	RK806_ID_DCDC6,
	RK806_ID_DCDC7,
	RK806_ID_DCDC8,
	RK806_ID_DCDC9,
	RK806_ID_DCDC10,

	RK806_ID_NLDO1,
	RK806_ID_NLDO2,
	RK806_ID_NLDO3,
	RK806_ID_NLDO4,
	RK806_ID_NLDO5,

	RK806_ID_PLDO1,
	RK806_ID_PLDO2,
	RK806_ID_PLDO3,
	RK806_ID_PLDO4,
	RK806_ID_PLDO5,
	RK806_ID_PLDO6,
	RK806_ID_END,
};

/* Define the RK806 IRQ numbers */
enum rk806_irqs {
	/* INT_STS0 registers */
	RK806_IRQ_PWRON_FALL,
	RK806_IRQ_PWRON_RISE,
	RK806_IRQ_PWRON,
	RK806_IRQ_PWRON_LP,
	RK806_IRQ_HOTDIE,
	RK806_IRQ_VDC_RISE,
	RK806_IRQ_VDC_FALL,
	RK806_IRQ_VB_LO,

	/* INT_STS0 registers */
	RK806_IRQ_REV0,
	RK806_IRQ_REV1,
	RK806_IRQ_REV2,
	RK806_IRQ_CRC_ERROR,
	RK806_IRQ_SLP3_GPIO,
	RK806_IRQ_SLP2_GPIO,
	RK806_IRQ_SLP1_GPIO,
	RK806_IRQ_WDT,
};

/* VCC1 Low Voltage Threshold */
enum rk806_lv_sel {
	VB_LO_SEL_2800,
	VB_LO_SEL_2900,
	VB_LO_SEL_3000,
	VB_LO_SEL_3100,
	VB_LO_SEL_3200,
	VB_LO_SEL_3300,
	VB_LO_SEL_3400,
	VB_LO_SEL_3500,
};

/* System Shutdown Voltage Select */
enum rk806_uv_sel {
	VB_UV_SEL_2700,
	VB_UV_SEL_2800,
	VB_UV_SEL_2900,
	VB_UV_SEL_3000,
	VB_UV_SEL_3100,
	VB_UV_SEL_3200,
	VB_UV_SEL_3300,
	VB_UV_SEL_3400,
};

/* Pin Function */
enum rk806_pwrctrl_fun {
	PWRCTRL_NULL_FUN,
	PWRCTRL_SLP_FUN,
	PWRCTRL_POWOFF_FUN,
	PWRCTRL_RST_FUN,
	PWRCTRL_DVS_FUN,
	PWRCTRL_GPIO_FUN,
};

/* Pin Polarity */
enum rk806_pin_level {
	POL_LOW,
	POL_HIGH,
};

enum rk806_vsel_ctr_sel {
	CTR_BY_NO_EFFECT,
	CTR_BY_PWRCTRL1,
	CTR_BY_PWRCTRL2,
	CTR_BY_PWRCTRL3,
};

enum rk806_dvs_ctr_sel {
	CTR_SEL_NO_EFFECT,
	CTR_SEL_DVS_START1,
	CTR_SEL_DVS_START2,
	CTR_SEL_DVS_START3,
};

enum rk806_pin_dr_sel {
	RK806_PIN_INPUT,
	RK806_PIN_OUTPUT,
};

#define RK806_INT_POL_MSK		BIT(1)
#define RK806_INT_POL_H			BIT(1)
#define RK806_INT_POL_L			0

#define RK806_SLAVE_RESTART_FUN_MSK	BIT(1)
#define RK806_SLAVE_RESTART_FUN_EN	BIT(1)
#define RK806_SLAVE_RESTART_FUN_OFF	0

#define RK806_SYS_ENB2_2M_MSK		BIT(1)
#define RK806_SYS_ENB2_2M_EN		BIT(1)
#define RK806_SYS_ENB2_2M_OFF		0

enum rk806_int_fun {
	RK806_INT_ONLY,
	RK806_INT_ADN_WKUP,
};

enum rk806_dvs_mode {
	RK806_DVS_NOT_SUPPORT,
	RK806_DVS_START1,
	RK806_DVS_START2,
	RK806_DVS_START3,
	RK806_DVS_PWRCTRL1,
	RK806_DVS_PWRCTRL2,
	RK806_DVS_PWRCTRL3,
	RK806_DVS_START_PWRCTR1,
	RK806_DVS_START_PWRCTR2,
	RK806_DVS_START_PWRCTR3,
	RK806_DVS_END,
};

/* RK808 IRQ Definitions */
#define RK808_IRQ_VOUT_LO	0
#define RK808_IRQ_VB_LO		1
#define RK808_IRQ_PWRON		2
#define RK808_IRQ_PWRON_LP	3
#define RK808_IRQ_HOTDIE	4
#define RK808_IRQ_RTC_ALARM	5
#define RK808_IRQ_RTC_PERIOD	6
#define RK808_IRQ_PLUG_IN_INT	7
#define RK808_IRQ_PLUG_OUT_INT	8
#define RK808_NUM_IRQ		9

#define RK808_IRQ_VOUT_LO_MSK		BIT(0)
#define RK808_IRQ_VB_LO_MSK		BIT(1)
#define RK808_IRQ_PWRON_MSK		BIT(2)
#define RK808_IRQ_PWRON_LP_MSK		BIT(3)
#define RK808_IRQ_HOTDIE_MSK		BIT(4)
#define RK808_IRQ_RTC_ALARM_MSK		BIT(5)
#define RK808_IRQ_RTC_PERIOD_MSK	BIT(6)
#define RK808_IRQ_PLUG_IN_INT_MSK	BIT(0)
#define RK808_IRQ_PLUG_OUT_INT_MSK	BIT(1)

/* RK818 IRQ Definitions */
#define RK818_IRQ_VOUT_LO	0
#define RK818_IRQ_VB_LO		1
#define RK818_IRQ_PWRON		2
#define RK818_IRQ_PWRON_LP	3
#define RK818_IRQ_HOTDIE	4
#define RK818_IRQ_RTC_ALARM	5
#define RK818_IRQ_RTC_PERIOD	6
#define RK818_IRQ_USB_OV	7
#define RK818_IRQ_PLUG_IN	8
#define RK818_IRQ_PLUG_OUT	9
#define RK818_IRQ_CHG_OK	10
#define RK818_IRQ_CHG_TE	11
#define RK818_IRQ_CHG_TS1	12
#define RK818_IRQ_TS2		13
#define RK818_IRQ_CHG_CVTLIM	14
#define RK818_IRQ_DISCHG_ILIM	15

#define RK818_IRQ_VOUT_LO_MSK		BIT(0)
#define RK818_IRQ_VB_LO_MSK		BIT(1)
#define RK818_IRQ_PWRON_MSK		BIT(2)
#define RK818_IRQ_PWRON_LP_MSK		BIT(3)
#define RK818_IRQ_HOTDIE_MSK		BIT(4)
#define RK818_IRQ_RTC_ALARM_MSK		BIT(5)
#define RK818_IRQ_RTC_PERIOD_MSK	BIT(6)
#define RK818_IRQ_USB_OV_MSK		BIT(7)
#define RK818_IRQ_PLUG_IN_MSK		BIT(0)
#define RK818_IRQ_PLUG_OUT_MSK		BIT(1)
#define RK818_IRQ_CHG_OK_MSK		BIT(2)
#define RK818_IRQ_CHG_TE_MSK		BIT(3)
#define RK818_IRQ_CHG_TS1_MSK		BIT(4)
#define RK818_IRQ_TS2_MSK		BIT(5)
#define RK818_IRQ_CHG_CVTLIM_MSK	BIT(6)
#define RK818_IRQ_DISCHG_ILIM_MSK	BIT(7)

#define RK818_NUM_IRQ		16

#define RK808_VBAT_LOW_2V8	0x00
#define RK808_VBAT_LOW_2V9	0x01
#define RK808_VBAT_LOW_3V0	0x02
#define RK808_VBAT_LOW_3V1	0x03
#define RK808_VBAT_LOW_3V2	0x04
#define RK808_VBAT_LOW_3V3	0x05
#define RK808_VBAT_LOW_3V4	0x06
#define RK808_VBAT_LOW_3V5	0x07
#define VBAT_LOW_VOL_MASK	(0x07 << 0)
#define EN_VABT_LOW_SHUT_DOWN	(0x00 << 4)
#define EN_VBAT_LOW_IRQ		(0x1 << 4)
#define VBAT_LOW_ACT_MASK	(0x1 << 4)

#define BUCK_ILMIN_MASK		(7 << 0)
#define BOOST_ILMIN_MASK	(7 << 0)
#define BUCK1_RATE_MASK		(3 << 3)
#define BUCK2_RATE_MASK		(3 << 3)
#define MASK_ALL	0xff

#define BUCK_UV_ACT_MASK	0x0f
#define BUCK_UV_ACT_DISABLE	0

#define SWITCH2_EN	BIT(6)
#define SWITCH1_EN	BIT(5)
#define DEV_OFF_RST	BIT(3)
#define DEV_RST		BIT(2)
#define DEV_OFF		BIT(0)
#define RTC_STOP	BIT(0)

#define VB_LO_ACT		BIT(4)
#define VB_LO_SEL_3500MV	(7 << 0)

#define VOUT_LO_INT	BIT(0)
#define CLK32KOUT2_EN	BIT(0)

#define TEMP115C			0x0c
#define TEMP_HOTDIE_MSK			0x0c
#define SLP_SD_MSK			(0x3 << 2)
#define SHUTDOWN_FUN			(0x2 << 2)
#define SLEEP_FUN			(0x1 << 2)
#define RK8XX_ID_MSK			0xfff0
#define PWM_MODE_MSK			BIT(7)
#define FPWM_MODE			BIT(7)
#define AUTO_PWM_MODE			0

enum rk817_reg_id {
	RK817_ID_DCDC1 = 0,
	RK817_ID_DCDC2,
	RK817_ID_DCDC3,
	RK817_ID_DCDC4,
	RK817_ID_LDO1,
	RK817_ID_LDO2,
	RK817_ID_LDO3,
	RK817_ID_LDO4,
	RK817_ID_LDO5,
	RK817_ID_LDO6,
	RK817_ID_LDO7,
	RK817_ID_LDO8,
	RK817_ID_LDO9,
	RK817_ID_BOOST,
	RK817_ID_BOOST_OTG_SW,
	RK817_NUM_REGULATORS
};

enum rk809_reg_id {
	RK809_ID_DCDC5 = RK817_ID_BOOST,
	RK809_ID_SW1,
	RK809_ID_SW2,
	RK809_NUM_REGULATORS
};

#define RK817_SECONDS_REG		0x00
#define RK817_MINUTES_REG		0x01
#define RK817_HOURS_REG			0x02
#define RK817_DAYS_REG			0x03
#define RK817_MONTHS_REG		0x04
#define RK817_YEARS_REG			0x05
#define RK817_WEEKS_REG			0x06
#define RK817_ALARM_SECONDS_REG		0x07
#define RK817_ALARM_MINUTES_REG		0x08
#define RK817_ALARM_HOURS_REG		0x09
#define RK817_ALARM_DAYS_REG		0x0a
#define RK817_ALARM_MONTHS_REG		0x0b
#define RK817_ALARM_YEARS_REG		0x0c
#define RK817_RTC_CTRL_REG		0xd
#define RK817_RTC_STATUS_REG		0xe
#define RK817_RTC_INT_REG		0xf
#define RK817_RTC_COMP_LSB_REG		0x10
#define RK817_RTC_COMP_MSB_REG		0x11

/* RK817 Codec Registers */
#define RK817_CODEC_DTOP_VUCTL		0x12
#define RK817_CODEC_DTOP_VUCTIME	0x13
#define RK817_CODEC_DTOP_LPT_SRST	0x14
#define RK817_CODEC_DTOP_DIGEN_CLKE	0x15
#define RK817_CODEC_AREF_RTCFG0		0x16
#define RK817_CODEC_AREF_RTCFG1		0x17
#define RK817_CODEC_AADC_CFG0		0x18
#define RK817_CODEC_AADC_CFG1		0x19
#define RK817_CODEC_DADC_VOLL		0x1a
#define RK817_CODEC_DADC_VOLR		0x1b
#define RK817_CODEC_DADC_SR_ACL0	0x1e
#define RK817_CODEC_DADC_ALC1		0x1f
#define RK817_CODEC_DADC_ALC2		0x20
#define RK817_CODEC_DADC_NG		0x21
#define RK817_CODEC_DADC_HPF		0x22
#define RK817_CODEC_DADC_RVOLL		0x23
#define RK817_CODEC_DADC_RVOLR		0x24
#define RK817_CODEC_AMIC_CFG0		0x27
#define RK817_CODEC_AMIC_CFG1		0x28
#define RK817_CODEC_DMIC_PGA_GAIN	0x29
#define RK817_CODEC_DMIC_LMT1		0x2a
#define RK817_CODEC_DMIC_LMT2		0x2b
#define RK817_CODEC_DMIC_NG1		0x2c
#define RK817_CODEC_DMIC_NG2		0x2d
#define RK817_CODEC_ADAC_CFG0		0x2e
#define RK817_CODEC_ADAC_CFG1		0x2f
#define RK817_CODEC_DDAC_POPD_DACST	0x30
#define RK817_CODEC_DDAC_VOLL		0x31
#define RK817_CODEC_DDAC_VOLR		0x32
#define RK817_CODEC_DDAC_SR_LMT0	0x35
#define RK817_CODEC_DDAC_LMT1		0x36
#define RK817_CODEC_DDAC_LMT2		0x37
#define RK817_CODEC_DDAC_MUTE_MIXCTL	0x38
#define RK817_CODEC_DDAC_RVOLL		0x39
#define RK817_CODEC_DDAC_RVOLR		0x3a
#define RK817_CODEC_AHP_ANTI0		0x3b
#define RK817_CODEC_AHP_ANTI1		0x3c
#define RK817_CODEC_AHP_CFG0		0x3d
#define RK817_CODEC_AHP_CFG1		0x3e
#define RK817_CODEC_AHP_CP		0x3f
#define RK817_CODEC_ACLASSD_CFG1	0x40
#define RK817_CODEC_ACLASSD_CFG2	0x41
#define RK817_CODEC_APLL_CFG0		0x42
#define RK817_CODEC_APLL_CFG1		0x43
#define RK817_CODEC_APLL_CFG2		0x44
#define RK817_CODEC_APLL_CFG3		0x45
#define RK817_CODEC_APLL_CFG4		0x46
#define RK817_CODEC_APLL_CFG5		0x47
#define RK817_CODEC_DI2S_CKM		0x48
#define RK817_CODEC_DI2S_RSD		0x49
#define RK817_CODEC_DI2S_RXCR1		0x4a
#define RK817_CODEC_DI2S_RXCR2		0x4b
#define RK817_CODEC_DI2S_RXCMD_TSD	0x4c
#define RK817_CODEC_DI2S_TXCR1		0x4d
#define RK817_CODEC_DI2S_TXCR2		0x4e
#define RK817_CODEC_DI2S_TXCR3_TXCMD	0x4f

/* RK817_CODEC_DI2S_CKM */
#define RK817_I2S_MODE_MASK		(0x1 << 0)
#define RK817_I2S_MODE_MST		(0x1 << 0)
#define RK817_I2S_MODE_SLV		(0x0 << 0)

/* RK817_CODEC_DDAC_MUTE_MIXCTL */
#define DACMT_MASK			(0x1 << 0)
#define DACMT_ENABLE			(0x1 << 0)
#define DACMT_DISABLE			(0x0 << 0)

/* RK817_CODEC_DI2S_RXCR2 */
#define VDW_RX_24BITS			(0x17)
#define VDW_RX_16BITS			(0x0f)

/* RK817_CODEC_DI2S_TXCR2 */
#define VDW_TX_24BITS			(0x17)
#define VDW_TX_16BITS			(0x0f)

/* RK817_CODEC_AMIC_CFG0 */
#define MIC_DIFF_MASK			(0x1 << 7)
#define MIC_DIFF_DIS			(0x0 << 7)
#define MIC_DIFF_EN			(0x1 << 7)

/* RK817 Battery Registers */
#define RK817_GAS_GAUGE_ADC_CONFIG0	0x50
#define RK817_GG_EN			(0x1 << 7)
#define RK817_SYS_VOL_ADC_EN		(0x1 << 6)
#define RK817_TS_ADC_EN			(0x1 << 5)
#define RK817_USB_VOL_ADC_EN		(0x1 << 4)
#define RK817_BAT_VOL_ADC_EN		(0x1 << 3)
#define RK817_BAT_CUR_ADC_EN		(0x1 << 2)

#define RK817_GAS_GAUGE_ADC_CONFIG1	0x55

#define RK817_VOL_CUR_CALIB_UPD		BIT(7)

#define RK817_GAS_GAUGE_GG_CON		0x56
#define RK817_GAS_GAUGE_GG_STS		0x57

#define RK817_BAT_CON			(0x1 << 4)
#define RK817_RELAX_VOL_UPD		(0x3 << 2)
#define RK817_RELAX_STS			(0x1 << 1)

#define RK817_GAS_GAUGE_RELAX_THRE_H	0x58
#define RK817_GAS_GAUGE_RELAX_THRE_L	0x59
#define RK817_GAS_GAUGE_OCV_THRE_VOL	0x62
#define RK817_GAS_GAUGE_OCV_VOL_H	0x63
#define RK817_GAS_GAUGE_OCV_VOL_L	0x64
#define RK817_GAS_GAUGE_PWRON_VOL_H	0x6b
#define RK817_GAS_GAUGE_PWRON_VOL_L	0x6c
#define RK817_GAS_GAUGE_PWRON_CUR_H	0x6d
#define RK817_GAS_GAUGE_PWRON_CUR_L	0x6e
#define RK817_GAS_GAUGE_OFF_CNT		0x6f
#define RK817_GAS_GAUGE_Q_INIT_H3	0x70
#define RK817_GAS_GAUGE_Q_INIT_H2	0x71
#define RK817_GAS_GAUGE_Q_INIT_L1	0x72
#define RK817_GAS_GAUGE_Q_INIT_L0	0x73
#define RK817_GAS_GAUGE_Q_PRES_H3	0x74
#define RK817_GAS_GAUGE_Q_PRES_H2	0x75
#define RK817_GAS_GAUGE_Q_PRES_L1	0x76
#define RK817_GAS_GAUGE_Q_PRES_L0	0x77
#define RK817_GAS_GAUGE_BAT_VOL_H	0x78
#define RK817_GAS_GAUGE_BAT_VOL_L	0x79
#define RK817_GAS_GAUGE_BAT_CUR_H	0x7a
#define RK817_GAS_GAUGE_BAT_CUR_L	0x7b
#define RK817_GAS_GAUGE_USB_VOL_H	0x7e
#define RK817_GAS_GAUGE_USB_VOL_L	0x7f
#define RK817_GAS_GAUGE_SYS_VOL_H	0x80
#define RK817_GAS_GAUGE_SYS_VOL_L	0x81
#define RK817_GAS_GAUGE_Q_MAX_H3	0x82
#define RK817_GAS_GAUGE_Q_MAX_H2	0x83
#define RK817_GAS_GAUGE_Q_MAX_L1	0x84
#define RK817_GAS_GAUGE_Q_MAX_L0	0x85
#define RK817_GAS_GAUGE_SLEEP_CON_SAMP_CUR_H	0x8f
#define RK817_GAS_GAUGE_SLEEP_CON_SAMP_CUR_L	0x90
#define RK817_GAS_GAUGE_CAL_OFFSET_H	0x91
#define RK817_GAS_GAUGE_CAL_OFFSET_L	0x92
#define RK817_GAS_GAUGE_VCALIB0_H	0x93
#define RK817_GAS_GAUGE_VCALIB0_L	0x94
#define RK817_GAS_GAUGE_VCALIB1_H	0x95
#define RK817_GAS_GAUGE_VCALIB1_L	0x96
#define RK817_GAS_GAUGE_IOFFSET_H	0x97
#define RK817_GAS_GAUGE_IOFFSET_L	0x98
#define RK817_GAS_GAUGE_BAT_R1		0x9a
#define RK817_GAS_GAUGE_BAT_R2		0x9b
#define RK817_GAS_GAUGE_BAT_R3		0x9c
#define RK817_GAS_GAUGE_DATA0		0x9d
#define RK817_GAS_GAUGE_DATA1		0x9e
#define RK817_GAS_GAUGE_DATA2		0x9f
#define RK817_GAS_GAUGE_DATA3		0xa0
#define RK817_GAS_GAUGE_DATA4		0xa1
#define RK817_GAS_GAUGE_DATA5		0xa2
#define RK817_GAS_GAUGE_CUR_ADC_K0	0xb0

#define RK817_POWER_EN_REG(i)		(0xb1 + (i))
#define RK817_POWER_SLP_EN_REG(i)	(0xb5 + (i))

#define RK817_POWER_CONFIG		(0xb9)

#define RK817_BUCK_CONFIG_REG(i)	(0xba + (i) * 3)

#define RK817_BUCK1_ON_VSEL_REG		0xBB
#define RK817_BUCK1_SLP_VSEL_REG	0xBC

#define RK817_BUCK2_CONFIG_REG		0xBD
#define RK817_BUCK2_ON_VSEL_REG		0xBE
#define RK817_BUCK2_SLP_VSEL_REG	0xBF

#define RK817_BUCK3_CONFIG_REG		0xC0
#define RK817_BUCK3_ON_VSEL_REG		0xC1
#define RK817_BUCK3_SLP_VSEL_REG	0xC2

#define RK817_BUCK4_CONFIG_REG		0xC3
#define RK817_BUCK4_ON_VSEL_REG		0xC4
#define RK817_BUCK4_SLP_VSEL_REG	0xC5

#define RK817_LDO_ON_VSEL_REG(idx)	(0xcc + (idx) * 2)
#define RK817_BOOST_OTG_CFG		(0xde)

#define RK817_PMIC_CHRG_OUT		0xe4
#define RK817_CHRG_VOL_SEL		(0x07 << 4)
#define RK817_CHRG_CUR_SEL		(0x07 << 0)

#define RK817_PMIC_CHRG_IN		0xe5
#define RK817_USB_VLIM_EN		(0x01 << 7)
#define RK817_USB_VLIM_SEL		(0x07 << 4)
#define RK817_USB_ILIM_EN		(0x01 << 3)
#define RK817_USB_ILIM_SEL		(0x07 << 0)
#define RK817_PMIC_CHRG_TERM		0xe6
#define RK817_CHRG_TERM_ANA_DIG		(0x01 << 2)
#define RK817_CHRG_TERM_ANA_SEL		(0x03 << 0)
#define RK817_CHRG_EN			(0x01 << 6)

#define RK817_PMIC_CHRG_STS		0xeb
#define RK817_BAT_EXS			BIT(7)
#define RK817_CHG_STS			(0x07 << 4)

#define RK817_ID_MSB			0xed
#define RK817_ID_LSB			0xee

#define RK817_SYS_STS			0xf0
#define RK817_PLUG_IN_STS		(0x1 << 6)

#define RK817_SYS_CFG(i)		(0xf1 + (i))

#define RK817_ON_SOURCE_REG		0xf5
#define RK817_OFF_SOURCE_REG		0xf6

/* INTERRUPT REGISTER */
#define RK817_INT_STS_REG0		0xf8
#define RK817_INT_STS_MSK_REG0		0xf9
#define RK817_INT_STS_REG1		0xfa
#define RK817_INT_STS_MSK_REG1		0xfb
#define RK817_INT_STS_REG2		0xfc
#define RK817_INT_STS_MSK_REG2		0xfd
#define RK817_GPIO_INT_CFG		0xfe

/* IRQ Definitions */
#define RK817_IRQ_PWRON_FALL		0
#define RK817_IRQ_PWRON_RISE		1
#define RK817_IRQ_PWRON			2
#define RK817_IRQ_PWMON_LP		3
#define RK817_IRQ_HOTDIE		4
#define RK817_IRQ_RTC_ALARM		5
#define RK817_IRQ_RTC_PERIOD		6
#define RK817_IRQ_VB_LO			7
#define RK817_IRQ_PLUG_IN		8
#define RK817_IRQ_PLUG_OUT		9
#define RK817_IRQ_CHRG_TERM		10
#define RK817_IRQ_CHRG_TIME		11
#define RK817_IRQ_CHRG_TS		12
#define RK817_IRQ_USB_OV		13
#define RK817_IRQ_CHRG_IN_CLMP		14
#define RK817_IRQ_BAT_DIS_ILIM		15
#define RK817_IRQ_GATE_GPIO		16
#define RK817_IRQ_TS_GPIO		17
#define RK817_IRQ_CODEC_PD		18
#define RK817_IRQ_CODEC_PO		19
#define RK817_IRQ_CLASSD_MUTE_DONE	20
#define RK817_IRQ_CLASSD_OCP		21
#define RK817_IRQ_BAT_OVP               22
#define RK817_IRQ_CHRG_BAT_HI		23
#define RK817_IRQ_END			(RK817_IRQ_CHRG_BAT_HI + 1)

/*
 * rtc_ctrl 0xd
 * same as 808, except bit4
 */
#define RK817_RTC_CTRL_RSV4		BIT(4)

/* power config 0xb9 */
#define RK817_BUCK3_FB_RES_MSK		BIT(6)
#define RK817_BUCK3_FB_RES_INTER	BIT(6)
#define RK817_BUCK3_FB_RES_EXT		0

/* buck config 0xba */
#define RK817_RAMP_RATE_OFFSET		6
#define RK817_RAMP_RATE_MASK		(0x3 << RK817_RAMP_RATE_OFFSET)
#define RK817_RAMP_RATE_3MV_PER_US	(0x0 << RK817_RAMP_RATE_OFFSET)
#define RK817_RAMP_RATE_6_3MV_PER_US	(0x1 << RK817_RAMP_RATE_OFFSET)
#define RK817_RAMP_RATE_12_5MV_PER_US	(0x2 << RK817_RAMP_RATE_OFFSET)
#define RK817_RAMP_RATE_25MV_PER_US	(0x3 << RK817_RAMP_RATE_OFFSET)

/* sys_cfg1 0xf2 */
#define RK817_HOTDIE_TEMP_MSK		(0x3 << 4)
#define RK817_HOTDIE_85			(0x0 << 4)
#define RK817_HOTDIE_95			(0x1 << 4)
#define RK817_HOTDIE_105		(0x2 << 4)
#define RK817_HOTDIE_115		(0x3 << 4)

#define RK817_TSD_TEMP_MSK		BIT(6)
#define RK817_TSD_140			0
#define RK817_TSD_160			BIT(6)

#define RK817_CLK32KOUT2_EN		BIT(7)

/* sys_cfg3 0xf4 */
#define RK817_SLPPIN_FUNC_MSK		(0x3 << 3)
#define SLPPIN_NULL_FUN			(0x0 << 3)
#define SLPPIN_SLP_FUN			(0x1 << 3)
#define SLPPIN_DN_FUN			(0x2 << 3)
#define SLPPIN_RST_FUN			(0x3 << 3)

#define RK817_RST_FUNC_MSK		(0x3 << 6)
#define RK817_RST_FUNC_SFT		(6)
#define RK817_RST_FUNC_CNT		(3)
#define RK817_RST_FUNC_DEV		(0) /* reset the dev */
#define RK817_RST_FUNC_REG		(0x1 << 6) /* reset the reg only */

#define RK817_SLPPOL_MSK		BIT(5)
#define RK817_SLPPOL_H			BIT(5)
#define RK817_SLPPOL_L			(0)

/* gpio&int 0xfe */
#define RK817_INT_POL_MSK		BIT(1)
#define RK817_INT_POL_H			BIT(1)
#define RK817_INT_POL_L			0
#define RK809_BUCK5_CONFIG(i)		(RK817_BOOST_OTG_CFG + (i) * 1)

enum {
	BUCK_ILMIN_50MA,
	BUCK_ILMIN_100MA,
	BUCK_ILMIN_150MA,
	BUCK_ILMIN_200MA,
	BUCK_ILMIN_250MA,
	BUCK_ILMIN_300MA,
	BUCK_ILMIN_350MA,
	BUCK_ILMIN_400MA,
};

enum {
	BOOST_ILMIN_75MA,
	BOOST_ILMIN_100MA,
	BOOST_ILMIN_125MA,
	BOOST_ILMIN_150MA,
	BOOST_ILMIN_175MA,
	BOOST_ILMIN_200MA,
	BOOST_ILMIN_225MA,
	BOOST_ILMIN_250MA,
};

enum {
	RK805_BUCK1_2_ILMAX_2500MA,
	RK805_BUCK1_2_ILMAX_3000MA,
	RK805_BUCK1_2_ILMAX_3500MA,
	RK805_BUCK1_2_ILMAX_4000MA,
};

enum {
	RK805_BUCK3_ILMAX_1500MA,
	RK805_BUCK3_ILMAX_2000MA,
	RK805_BUCK3_ILMAX_2500MA,
	RK805_BUCK3_ILMAX_3000MA,
};

enum {
	RK805_BUCK4_ILMAX_2000MA,
	RK805_BUCK4_ILMAX_2500MA,
	RK805_BUCK4_ILMAX_3000MA,
	RK805_BUCK4_ILMAX_3500MA,
};

enum {
	RK805_ID = 0x8050,
	RK806_ID = 0x8060,
	RK808_ID = 0x0000,
	RK809_ID = 0x8090,
	RK817_ID = 0x8170,
	RK818_ID = 0x8180,
};

struct rk808 {
	struct device			*dev;
	struct regmap_irq_chip_data	*irq_data;
	struct regmap			*regmap;
	long				variant;
	const struct regmap_config	*regmap_cfg;
	const struct regmap_irq_chip	*regmap_irq_chip;
};

void rk8xx_shutdown(struct device *dev);
int rk8xx_probe(struct device *dev, int variant, unsigned int irq, struct regmap *regmap);
int rk8xx_suspend(struct device *dev);
int rk8xx_resume(struct device *dev);

#endif /* __HEISEN_REGULATOR_RK808_H */