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
 * @file _types.h

 */
#ifndef __ALINIX_KERNEL__TYPES_H_HEADER_
#define __ALINIX_KERNEL__TYPES_H_HEADER_

#include <stdio.h>

#ifdef __cplusplus
#define ALINIX_NULL_CPP_NULL_PTR (*(void ))
#define ALINIX_NULL nullptr

#else 
#define ALINIX_NULL (*(void ))

#endif  /* __cplusplus */

#endif /*__ALINIX_KERNEL_TYPES_H_HEADER_*/