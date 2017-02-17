/**
 * @file si5338.h
 *
 * @brief SI5339 Support
 *
 * This file is part of the bladeRF project:
 *   http://www.github.com/nuand/bladeRF
 *
 * Copyright (C) 2013 Nuand LLC
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
 */

#ifndef SI5338_H__
#define SI5338_H__

#include <libbladeRF.h>

#include "board/board.h"

/**
 * Set the rational sample rate of the specified module.
 *
 * @param[inout]    dev     Device handle
 * @param[in]       module  Device module
 * @param[in]       rate    Rational rate requested
 * @param[out]      actual  Rational rate actually set
 *
 * @return 0 on success, BLADERF_ERR_* value on failure
 */
int si5338_set_rational_sample_rate(struct bladerf *dev, bladerf_module module,
                                    const struct bladerf_rational_rate *rate,
                                    struct bladerf_rational_rate *actual);

/**
 * Get the rational sample rate of the specified module.
 *
 * @param[inout]    dev     Device handle
 * @param[in]       module  Device module
 * @param[out]      rate    Rational rate
 *
 * @return 0 on success, BLADERF_ERR_* value on failure
 */
int si5338_get_rational_sample_rate(struct bladerf *dev, bladerf_module module,
                                    struct bladerf_rational_rate *rate);

/**
 * Set the integral sample rate of the specified module.
 *
 * @param[inout]    dev     Device handle
 * @param[in]       module  Device module
 * @param[in]       rate    Integral rate requested
 * @param[out]      actual  Integral rate actually set
 *
 * @return 0 on success, BLADERF_ERR_* value on failure
 */
int si5338_set_sample_rate(struct bladerf *dev, bladerf_module module,
                           uint32_t rate, uint32_t *actual);

/**
 * Get the integral sample rate of the specified module.
 *
 * @param[inout]    dev     Device handle
 * @param[in]       module  Device module
 * @param[out]      rate    Integral rate
 *
 * @return 0 on success, BLADERF_ERR_* value on failure
 */
int si5338_get_sample_rate(struct bladerf *dev, bladerf_module module,
                           unsigned int *rate);

/**
 * Set the rational frequency of the external SMB port.
 *
 * @param[inout]    dev     Device handle
 * @param[in]       rate    Rational rate requested
 * @param[out]      actual  Rational rate actually set
 *
 * @return 0 on success, BLADERF_ERR_* value on failure
 */
int si5338_set_rational_smb_freq(struct bladerf *dev,
                                 const struct bladerf_rational_rate *rate,
                                 struct bladerf_rational_rate *actual);

/**
 * Get the rational sample rate of the external SMB port.
 *
 * @param[inout]    dev     Device handle
 * @param[out]      rate    Rational rate
 *
 * @return 0 on success, BLADERF_ERR_* value on failure
 */
int si5338_get_rational_smb_freq(struct bladerf *dev,
                                 struct bladerf_rational_rate *rate);

/**
 * Set the integral sample rate of the external SMB port.
 *
 * @param[inout]    dev     Device handle
 * @param[in]       rate    Integral rate requested
 * @param[out]      actual  Integral rate actually set
 *
 * @return 0 on success, BLADERF_ERR_* value on failure
 */
int si5338_set_smb_freq(struct bladerf *dev, uint32_t rate, uint32_t *actual);

/**
  Get the integral sample rate of the external SMB port.
 *
 * @param[inout]    dev     Device handle
 * @param[out]      rate    Integral rate
 *
 * @return 0 on success, BLADERF_ERR_* value on failure
 */
int si5338_get_smb_freq(struct bladerf *dev, unsigned int *rate);

#endif
