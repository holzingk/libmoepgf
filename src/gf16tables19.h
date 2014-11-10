/*
 * This file is part of moep80211gf.
 *
 * Copyright (C) 2014   Stephan M. Guenther <moepi@moepi.net>
 * Copyright (C) 2014   Maximilian Riemensberger <riemensberger@tum.de>
 *
 *
 * This library is free software; you can redistribute it and/or modify it under
 * the terms of the GNU Lesser General Public License as published by the Free
 * Software Foundation; either version 2.1 of the License, or (at your option)
 * any later version.
 *
 * This library is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public License
 * for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this library. If not, see <https://www.gnu.org/licenses/>
 *
 */

#define MOEPGF16_POLYNOMIAL_DIV_TABLE { \
{0x00,0x00,0x00,0x00},\
{0x01,0x02,0x04,0x08},\
{0x02,0x04,0x08,0x03},\
{0x03,0x06,0x0c,0x0b},\
{0x04,0x08,0x03,0x06},\
{0x05,0x0a,0x07,0x0e},\
{0x06,0x0c,0x0b,0x05},\
{0x07,0x0e,0x0f,0x0d},\
{0x08,0x03,0x06,0x0c},\
{0x09,0x01,0x02,0x04},\
{0x0a,0x07,0x0e,0x0f},\
{0x0b,0x05,0x0a,0x07},\
{0x0c,0x0b,0x05,0x0a},\
{0x0d,0x09,0x01,0x02},\
{0x0e,0x0f,0x0d,0x09},\
{0x0f,0x0d,0x09,0x01}\
}

#define MOEPGF16_MUL_TABLE { \
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},\
{0x00,0x01,0x02,0x03,0x04,0x05,0x06,0x07,0x08,0x09,0x0a,0x0b,0x0c,0x0d,0x0e,0x0f},\
{0x00,0x02,0x04,0x06,0x08,0x0a,0x0c,0x0e,0x03,0x01,0x07,0x05,0x0b,0x09,0x0f,0x0d},\
{0x00,0x03,0x06,0x05,0x0c,0x0f,0x0a,0x09,0x0b,0x08,0x0d,0x0e,0x07,0x04,0x01,0x02},\
{0x00,0x04,0x08,0x0c,0x03,0x07,0x0b,0x0f,0x06,0x02,0x0e,0x0a,0x05,0x01,0x0d,0x09},\
{0x00,0x05,0x0a,0x0f,0x07,0x02,0x0d,0x08,0x0e,0x0b,0x04,0x01,0x09,0x0c,0x03,0x06},\
{0x00,0x06,0x0c,0x0a,0x0b,0x0d,0x07,0x01,0x05,0x03,0x09,0x0f,0x0e,0x08,0x02,0x04},\
{0x00,0x07,0x0e,0x09,0x0f,0x08,0x01,0x06,0x0d,0x0a,0x03,0x04,0x02,0x05,0x0c,0x0b},\
{0x00,0x08,0x03,0x0b,0x06,0x0e,0x05,0x0d,0x0c,0x04,0x0f,0x07,0x0a,0x02,0x09,0x01},\
{0x00,0x09,0x01,0x08,0x02,0x0b,0x03,0x0a,0x04,0x0d,0x05,0x0c,0x06,0x0f,0x07,0x0e},\
{0x00,0x0a,0x07,0x0d,0x0e,0x04,0x09,0x03,0x0f,0x05,0x08,0x02,0x01,0x0b,0x06,0x0c},\
{0x00,0x0b,0x05,0x0e,0x0a,0x01,0x0f,0x04,0x07,0x0c,0x02,0x09,0x0d,0x06,0x08,0x03},\
{0x00,0x0c,0x0b,0x07,0x05,0x09,0x0e,0x02,0x0a,0x06,0x01,0x0d,0x0f,0x03,0x04,0x08},\
{0x00,0x0d,0x09,0x04,0x01,0x0c,0x08,0x05,0x02,0x0f,0x0b,0x06,0x03,0x0e,0x0a,0x07},\
{0x00,0x0e,0x0f,0x01,0x0d,0x03,0x02,0x0c,0x09,0x07,0x06,0x08,0x04,0x0a,0x0b,0x05},\
{0x00,0x0f,0x0d,0x02,0x09,0x06,0x04,0x0b,0x01,0x0e,0x0c,0x03,0x08,0x07,0x05,0x0a}\
}

#define MOEPGF16_INV_TABLE {\
0x00,0x01,0x09,0x0e,0x0d,0x0b,0x07,0x06,0x0f,0x02,0x0c,0x05,0x0a,0x04,0x03,0x08\
}

#define MOEPGF16_LOOKUP_TABLE { \
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},\
{0x00,0x01,0x02,0x03,0x04,0x05,0x06,0x07,0x08,0x09,0x0a,0x0b,0x0c,0x0d,0x0e,0x0f,\
0x10,0x11,0x12,0x13,0x14,0x15,0x16,0x17,0x18,0x19,0x1a,0x1b,0x1c,0x1d,0x1e,0x1f,\
0x20,0x21,0x22,0x23,0x24,0x25,0x26,0x27,0x28,0x29,0x2a,0x2b,0x2c,0x2d,0x2e,0x2f,\
0x30,0x31,0x32,0x33,0x34,0x35,0x36,0x37,0x38,0x39,0x3a,0x3b,0x3c,0x3d,0x3e,0x3f,\
0x40,0x41,0x42,0x43,0x44,0x45,0x46,0x47,0x48,0x49,0x4a,0x4b,0x4c,0x4d,0x4e,0x4f,\
0x50,0x51,0x52,0x53,0x54,0x55,0x56,0x57,0x58,0x59,0x5a,0x5b,0x5c,0x5d,0x5e,0x5f,\
0x60,0x61,0x62,0x63,0x64,0x65,0x66,0x67,0x68,0x69,0x6a,0x6b,0x6c,0x6d,0x6e,0x6f,\
0x70,0x71,0x72,0x73,0x74,0x75,0x76,0x77,0x78,0x79,0x7a,0x7b,0x7c,0x7d,0x7e,0x7f,\
0x80,0x81,0x82,0x83,0x84,0x85,0x86,0x87,0x88,0x89,0x8a,0x8b,0x8c,0x8d,0x8e,0x8f,\
0x90,0x91,0x92,0x93,0x94,0x95,0x96,0x97,0x98,0x99,0x9a,0x9b,0x9c,0x9d,0x9e,0x9f,\
0xa0,0xa1,0xa2,0xa3,0xa4,0xa5,0xa6,0xa7,0xa8,0xa9,0xaa,0xab,0xac,0xad,0xae,0xaf,\
0xb0,0xb1,0xb2,0xb3,0xb4,0xb5,0xb6,0xb7,0xb8,0xb9,0xba,0xbb,0xbc,0xbd,0xbe,0xbf,\
0xc0,0xc1,0xc2,0xc3,0xc4,0xc5,0xc6,0xc7,0xc8,0xc9,0xca,0xcb,0xcc,0xcd,0xce,0xcf,\
0xd0,0xd1,0xd2,0xd3,0xd4,0xd5,0xd6,0xd7,0xd8,0xd9,0xda,0xdb,0xdc,0xdd,0xde,0xdf,\
0xe0,0xe1,0xe2,0xe3,0xe4,0xe5,0xe6,0xe7,0xe8,0xe9,0xea,0xeb,0xec,0xed,0xee,0xef,\
0xf0,0xf1,0xf2,0xf3,0xf4,0xf5,0xf6,0xf7,0xf8,0xf9,0xfa,0xfb,0xfc,0xfd,0xfe,0xff},\
{0x00,0x02,0x04,0x06,0x08,0x0a,0x0c,0x0e,0x03,0x01,0x07,0x05,0x0b,0x09,0x0f,0x0d,\
0x20,0x22,0x24,0x26,0x28,0x2a,0x2c,0x2e,0x23,0x21,0x27,0x25,0x2b,0x29,0x2f,0x2d,\
0x40,0x42,0x44,0x46,0x48,0x4a,0x4c,0x4e,0x43,0x41,0x47,0x45,0x4b,0x49,0x4f,0x4d,\
0x60,0x62,0x64,0x66,0x68,0x6a,0x6c,0x6e,0x63,0x61,0x67,0x65,0x6b,0x69,0x6f,0x6d,\
0x80,0x82,0x84,0x86,0x88,0x8a,0x8c,0x8e,0x83,0x81,0x87,0x85,0x8b,0x89,0x8f,0x8d,\
0xa0,0xa2,0xa4,0xa6,0xa8,0xaa,0xac,0xae,0xa3,0xa1,0xa7,0xa5,0xab,0xa9,0xaf,0xad,\
0xc0,0xc2,0xc4,0xc6,0xc8,0xca,0xcc,0xce,0xc3,0xc1,0xc7,0xc5,0xcb,0xc9,0xcf,0xcd,\
0xe0,0xe2,0xe4,0xe6,0xe8,0xea,0xec,0xee,0xe3,0xe1,0xe7,0xe5,0xeb,0xe9,0xef,0xed,\
0x30,0x32,0x34,0x36,0x38,0x3a,0x3c,0x3e,0x33,0x31,0x37,0x35,0x3b,0x39,0x3f,0x3d,\
0x10,0x12,0x14,0x16,0x18,0x1a,0x1c,0x1e,0x13,0x11,0x17,0x15,0x1b,0x19,0x1f,0x1d,\
0x70,0x72,0x74,0x76,0x78,0x7a,0x7c,0x7e,0x73,0x71,0x77,0x75,0x7b,0x79,0x7f,0x7d,\
0x50,0x52,0x54,0x56,0x58,0x5a,0x5c,0x5e,0x53,0x51,0x57,0x55,0x5b,0x59,0x5f,0x5d,\
0xb0,0xb2,0xb4,0xb6,0xb8,0xba,0xbc,0xbe,0xb3,0xb1,0xb7,0xb5,0xbb,0xb9,0xbf,0xbd,\
0x90,0x92,0x94,0x96,0x98,0x9a,0x9c,0x9e,0x93,0x91,0x97,0x95,0x9b,0x99,0x9f,0x9d,\
0xf0,0xf2,0xf4,0xf6,0xf8,0xfa,0xfc,0xfe,0xf3,0xf1,0xf7,0xf5,0xfb,0xf9,0xff,0xfd,\
0xd0,0xd2,0xd4,0xd6,0xd8,0xda,0xdc,0xde,0xd3,0xd1,0xd7,0xd5,0xdb,0xd9,0xdf,0xdd},\
{0x00,0x03,0x06,0x05,0x0c,0x0f,0x0a,0x09,0x0b,0x08,0x0d,0x0e,0x07,0x04,0x01,0x02,\
0x30,0x33,0x36,0x35,0x3c,0x3f,0x3a,0x39,0x3b,0x38,0x3d,0x3e,0x37,0x34,0x31,0x32,\
0x60,0x63,0x66,0x65,0x6c,0x6f,0x6a,0x69,0x6b,0x68,0x6d,0x6e,0x67,0x64,0x61,0x62,\
0x50,0x53,0x56,0x55,0x5c,0x5f,0x5a,0x59,0x5b,0x58,0x5d,0x5e,0x57,0x54,0x51,0x52,\
0xc0,0xc3,0xc6,0xc5,0xcc,0xcf,0xca,0xc9,0xcb,0xc8,0xcd,0xce,0xc7,0xc4,0xc1,0xc2,\
0xf0,0xf3,0xf6,0xf5,0xfc,0xff,0xfa,0xf9,0xfb,0xf8,0xfd,0xfe,0xf7,0xf4,0xf1,0xf2,\
0xa0,0xa3,0xa6,0xa5,0xac,0xaf,0xaa,0xa9,0xab,0xa8,0xad,0xae,0xa7,0xa4,0xa1,0xa2,\
0x90,0x93,0x96,0x95,0x9c,0x9f,0x9a,0x99,0x9b,0x98,0x9d,0x9e,0x97,0x94,0x91,0x92,\
0xb0,0xb3,0xb6,0xb5,0xbc,0xbf,0xba,0xb9,0xbb,0xb8,0xbd,0xbe,0xb7,0xb4,0xb1,0xb2,\
0x80,0x83,0x86,0x85,0x8c,0x8f,0x8a,0x89,0x8b,0x88,0x8d,0x8e,0x87,0x84,0x81,0x82,\
0xd0,0xd3,0xd6,0xd5,0xdc,0xdf,0xda,0xd9,0xdb,0xd8,0xdd,0xde,0xd7,0xd4,0xd1,0xd2,\
0xe0,0xe3,0xe6,0xe5,0xec,0xef,0xea,0xe9,0xeb,0xe8,0xed,0xee,0xe7,0xe4,0xe1,0xe2,\
0x70,0x73,0x76,0x75,0x7c,0x7f,0x7a,0x79,0x7b,0x78,0x7d,0x7e,0x77,0x74,0x71,0x72,\
0x40,0x43,0x46,0x45,0x4c,0x4f,0x4a,0x49,0x4b,0x48,0x4d,0x4e,0x47,0x44,0x41,0x42,\
0x10,0x13,0x16,0x15,0x1c,0x1f,0x1a,0x19,0x1b,0x18,0x1d,0x1e,0x17,0x14,0x11,0x12,\
0x20,0x23,0x26,0x25,0x2c,0x2f,0x2a,0x29,0x2b,0x28,0x2d,0x2e,0x27,0x24,0x21,0x22},\
{0x00,0x04,0x08,0x0c,0x03,0x07,0x0b,0x0f,0x06,0x02,0x0e,0x0a,0x05,0x01,0x0d,0x09,\
0x40,0x44,0x48,0x4c,0x43,0x47,0x4b,0x4f,0x46,0x42,0x4e,0x4a,0x45,0x41,0x4d,0x49,\
0x80,0x84,0x88,0x8c,0x83,0x87,0x8b,0x8f,0x86,0x82,0x8e,0x8a,0x85,0x81,0x8d,0x89,\
0xc0,0xc4,0xc8,0xcc,0xc3,0xc7,0xcb,0xcf,0xc6,0xc2,0xce,0xca,0xc5,0xc1,0xcd,0xc9,\
0x30,0x34,0x38,0x3c,0x33,0x37,0x3b,0x3f,0x36,0x32,0x3e,0x3a,0x35,0x31,0x3d,0x39,\
0x70,0x74,0x78,0x7c,0x73,0x77,0x7b,0x7f,0x76,0x72,0x7e,0x7a,0x75,0x71,0x7d,0x79,\
0xb0,0xb4,0xb8,0xbc,0xb3,0xb7,0xbb,0xbf,0xb6,0xb2,0xbe,0xba,0xb5,0xb1,0xbd,0xb9,\
0xf0,0xf4,0xf8,0xfc,0xf3,0xf7,0xfb,0xff,0xf6,0xf2,0xfe,0xfa,0xf5,0xf1,0xfd,0xf9,\
0x60,0x64,0x68,0x6c,0x63,0x67,0x6b,0x6f,0x66,0x62,0x6e,0x6a,0x65,0x61,0x6d,0x69,\
0x20,0x24,0x28,0x2c,0x23,0x27,0x2b,0x2f,0x26,0x22,0x2e,0x2a,0x25,0x21,0x2d,0x29,\
0xe0,0xe4,0xe8,0xec,0xe3,0xe7,0xeb,0xef,0xe6,0xe2,0xee,0xea,0xe5,0xe1,0xed,0xe9,\
0xa0,0xa4,0xa8,0xac,0xa3,0xa7,0xab,0xaf,0xa6,0xa2,0xae,0xaa,0xa5,0xa1,0xad,0xa9,\
0x50,0x54,0x58,0x5c,0x53,0x57,0x5b,0x5f,0x56,0x52,0x5e,0x5a,0x55,0x51,0x5d,0x59,\
0x10,0x14,0x18,0x1c,0x13,0x17,0x1b,0x1f,0x16,0x12,0x1e,0x1a,0x15,0x11,0x1d,0x19,\
0xd0,0xd4,0xd8,0xdc,0xd3,0xd7,0xdb,0xdf,0xd6,0xd2,0xde,0xda,0xd5,0xd1,0xdd,0xd9,\
0x90,0x94,0x98,0x9c,0x93,0x97,0x9b,0x9f,0x96,0x92,0x9e,0x9a,0x95,0x91,0x9d,0x99},\
{0x00,0x05,0x0a,0x0f,0x07,0x02,0x0d,0x08,0x0e,0x0b,0x04,0x01,0x09,0x0c,0x03,0x06,\
0x50,0x55,0x5a,0x5f,0x57,0x52,0x5d,0x58,0x5e,0x5b,0x54,0x51,0x59,0x5c,0x53,0x56,\
0xa0,0xa5,0xaa,0xaf,0xa7,0xa2,0xad,0xa8,0xae,0xab,0xa4,0xa1,0xa9,0xac,0xa3,0xa6,\
0xf0,0xf5,0xfa,0xff,0xf7,0xf2,0xfd,0xf8,0xfe,0xfb,0xf4,0xf1,0xf9,0xfc,0xf3,0xf6,\
0x70,0x75,0x7a,0x7f,0x77,0x72,0x7d,0x78,0x7e,0x7b,0x74,0x71,0x79,0x7c,0x73,0x76,\
0x20,0x25,0x2a,0x2f,0x27,0x22,0x2d,0x28,0x2e,0x2b,0x24,0x21,0x29,0x2c,0x23,0x26,\
0xd0,0xd5,0xda,0xdf,0xd7,0xd2,0xdd,0xd8,0xde,0xdb,0xd4,0xd1,0xd9,0xdc,0xd3,0xd6,\
0x80,0x85,0x8a,0x8f,0x87,0x82,0x8d,0x88,0x8e,0x8b,0x84,0x81,0x89,0x8c,0x83,0x86,\
0xe0,0xe5,0xea,0xef,0xe7,0xe2,0xed,0xe8,0xee,0xeb,0xe4,0xe1,0xe9,0xec,0xe3,0xe6,\
0xb0,0xb5,0xba,0xbf,0xb7,0xb2,0xbd,0xb8,0xbe,0xbb,0xb4,0xb1,0xb9,0xbc,0xb3,0xb6,\
0x40,0x45,0x4a,0x4f,0x47,0x42,0x4d,0x48,0x4e,0x4b,0x44,0x41,0x49,0x4c,0x43,0x46,\
0x10,0x15,0x1a,0x1f,0x17,0x12,0x1d,0x18,0x1e,0x1b,0x14,0x11,0x19,0x1c,0x13,0x16,\
0x90,0x95,0x9a,0x9f,0x97,0x92,0x9d,0x98,0x9e,0x9b,0x94,0x91,0x99,0x9c,0x93,0x96,\
0xc0,0xc5,0xca,0xcf,0xc7,0xc2,0xcd,0xc8,0xce,0xcb,0xc4,0xc1,0xc9,0xcc,0xc3,0xc6,\
0x30,0x35,0x3a,0x3f,0x37,0x32,0x3d,0x38,0x3e,0x3b,0x34,0x31,0x39,0x3c,0x33,0x36,\
0x60,0x65,0x6a,0x6f,0x67,0x62,0x6d,0x68,0x6e,0x6b,0x64,0x61,0x69,0x6c,0x63,0x66},\
{0x00,0x06,0x0c,0x0a,0x0b,0x0d,0x07,0x01,0x05,0x03,0x09,0x0f,0x0e,0x08,0x02,0x04,\
0x60,0x66,0x6c,0x6a,0x6b,0x6d,0x67,0x61,0x65,0x63,0x69,0x6f,0x6e,0x68,0x62,0x64,\
0xc0,0xc6,0xcc,0xca,0xcb,0xcd,0xc7,0xc1,0xc5,0xc3,0xc9,0xcf,0xce,0xc8,0xc2,0xc4,\
0xa0,0xa6,0xac,0xaa,0xab,0xad,0xa7,0xa1,0xa5,0xa3,0xa9,0xaf,0xae,0xa8,0xa2,0xa4,\
0xb0,0xb6,0xbc,0xba,0xbb,0xbd,0xb7,0xb1,0xb5,0xb3,0xb9,0xbf,0xbe,0xb8,0xb2,0xb4,\
0xd0,0xd6,0xdc,0xda,0xdb,0xdd,0xd7,0xd1,0xd5,0xd3,0xd9,0xdf,0xde,0xd8,0xd2,0xd4,\
0x70,0x76,0x7c,0x7a,0x7b,0x7d,0x77,0x71,0x75,0x73,0x79,0x7f,0x7e,0x78,0x72,0x74,\
0x10,0x16,0x1c,0x1a,0x1b,0x1d,0x17,0x11,0x15,0x13,0x19,0x1f,0x1e,0x18,0x12,0x14,\
0x50,0x56,0x5c,0x5a,0x5b,0x5d,0x57,0x51,0x55,0x53,0x59,0x5f,0x5e,0x58,0x52,0x54,\
0x30,0x36,0x3c,0x3a,0x3b,0x3d,0x37,0x31,0x35,0x33,0x39,0x3f,0x3e,0x38,0x32,0x34,\
0x90,0x96,0x9c,0x9a,0x9b,0x9d,0x97,0x91,0x95,0x93,0x99,0x9f,0x9e,0x98,0x92,0x94,\
0xf0,0xf6,0xfc,0xfa,0xfb,0xfd,0xf7,0xf1,0xf5,0xf3,0xf9,0xff,0xfe,0xf8,0xf2,0xf4,\
0xe0,0xe6,0xec,0xea,0xeb,0xed,0xe7,0xe1,0xe5,0xe3,0xe9,0xef,0xee,0xe8,0xe2,0xe4,\
0x80,0x86,0x8c,0x8a,0x8b,0x8d,0x87,0x81,0x85,0x83,0x89,0x8f,0x8e,0x88,0x82,0x84,\
0x20,0x26,0x2c,0x2a,0x2b,0x2d,0x27,0x21,0x25,0x23,0x29,0x2f,0x2e,0x28,0x22,0x24,\
0x40,0x46,0x4c,0x4a,0x4b,0x4d,0x47,0x41,0x45,0x43,0x49,0x4f,0x4e,0x48,0x42,0x44},\
{0x00,0x07,0x0e,0x09,0x0f,0x08,0x01,0x06,0x0d,0x0a,0x03,0x04,0x02,0x05,0x0c,0x0b,\
0x70,0x77,0x7e,0x79,0x7f,0x78,0x71,0x76,0x7d,0x7a,0x73,0x74,0x72,0x75,0x7c,0x7b,\
0xe0,0xe7,0xee,0xe9,0xef,0xe8,0xe1,0xe6,0xed,0xea,0xe3,0xe4,0xe2,0xe5,0xec,0xeb,\
0x90,0x97,0x9e,0x99,0x9f,0x98,0x91,0x96,0x9d,0x9a,0x93,0x94,0x92,0x95,0x9c,0x9b,\
0xf0,0xf7,0xfe,0xf9,0xff,0xf8,0xf1,0xf6,0xfd,0xfa,0xf3,0xf4,0xf2,0xf5,0xfc,0xfb,\
0x80,0x87,0x8e,0x89,0x8f,0x88,0x81,0x86,0x8d,0x8a,0x83,0x84,0x82,0x85,0x8c,0x8b,\
0x10,0x17,0x1e,0x19,0x1f,0x18,0x11,0x16,0x1d,0x1a,0x13,0x14,0x12,0x15,0x1c,0x1b,\
0x60,0x67,0x6e,0x69,0x6f,0x68,0x61,0x66,0x6d,0x6a,0x63,0x64,0x62,0x65,0x6c,0x6b,\
0xd0,0xd7,0xde,0xd9,0xdf,0xd8,0xd1,0xd6,0xdd,0xda,0xd3,0xd4,0xd2,0xd5,0xdc,0xdb,\
0xa0,0xa7,0xae,0xa9,0xaf,0xa8,0xa1,0xa6,0xad,0xaa,0xa3,0xa4,0xa2,0xa5,0xac,0xab,\
0x30,0x37,0x3e,0x39,0x3f,0x38,0x31,0x36,0x3d,0x3a,0x33,0x34,0x32,0x35,0x3c,0x3b,\
0x40,0x47,0x4e,0x49,0x4f,0x48,0x41,0x46,0x4d,0x4a,0x43,0x44,0x42,0x45,0x4c,0x4b,\
0x20,0x27,0x2e,0x29,0x2f,0x28,0x21,0x26,0x2d,0x2a,0x23,0x24,0x22,0x25,0x2c,0x2b,\
0x50,0x57,0x5e,0x59,0x5f,0x58,0x51,0x56,0x5d,0x5a,0x53,0x54,0x52,0x55,0x5c,0x5b,\
0xc0,0xc7,0xce,0xc9,0xcf,0xc8,0xc1,0xc6,0xcd,0xca,0xc3,0xc4,0xc2,0xc5,0xcc,0xcb,\
0xb0,0xb7,0xbe,0xb9,0xbf,0xb8,0xb1,0xb6,0xbd,0xba,0xb3,0xb4,0xb2,0xb5,0xbc,0xbb},\
{0x00,0x08,0x03,0x0b,0x06,0x0e,0x05,0x0d,0x0c,0x04,0x0f,0x07,0x0a,0x02,0x09,0x01,\
0x80,0x88,0x83,0x8b,0x86,0x8e,0x85,0x8d,0x8c,0x84,0x8f,0x87,0x8a,0x82,0x89,0x81,\
0x30,0x38,0x33,0x3b,0x36,0x3e,0x35,0x3d,0x3c,0x34,0x3f,0x37,0x3a,0x32,0x39,0x31,\
0xb0,0xb8,0xb3,0xbb,0xb6,0xbe,0xb5,0xbd,0xbc,0xb4,0xbf,0xb7,0xba,0xb2,0xb9,0xb1,\
0x60,0x68,0x63,0x6b,0x66,0x6e,0x65,0x6d,0x6c,0x64,0x6f,0x67,0x6a,0x62,0x69,0x61,\
0xe0,0xe8,0xe3,0xeb,0xe6,0xee,0xe5,0xed,0xec,0xe4,0xef,0xe7,0xea,0xe2,0xe9,0xe1,\
0x50,0x58,0x53,0x5b,0x56,0x5e,0x55,0x5d,0x5c,0x54,0x5f,0x57,0x5a,0x52,0x59,0x51,\
0xd0,0xd8,0xd3,0xdb,0xd6,0xde,0xd5,0xdd,0xdc,0xd4,0xdf,0xd7,0xda,0xd2,0xd9,0xd1,\
0xc0,0xc8,0xc3,0xcb,0xc6,0xce,0xc5,0xcd,0xcc,0xc4,0xcf,0xc7,0xca,0xc2,0xc9,0xc1,\
0x40,0x48,0x43,0x4b,0x46,0x4e,0x45,0x4d,0x4c,0x44,0x4f,0x47,0x4a,0x42,0x49,0x41,\
0xf0,0xf8,0xf3,0xfb,0xf6,0xfe,0xf5,0xfd,0xfc,0xf4,0xff,0xf7,0xfa,0xf2,0xf9,0xf1,\
0x70,0x78,0x73,0x7b,0x76,0x7e,0x75,0x7d,0x7c,0x74,0x7f,0x77,0x7a,0x72,0x79,0x71,\
0xa0,0xa8,0xa3,0xab,0xa6,0xae,0xa5,0xad,0xac,0xa4,0xaf,0xa7,0xaa,0xa2,0xa9,0xa1,\
0x20,0x28,0x23,0x2b,0x26,0x2e,0x25,0x2d,0x2c,0x24,0x2f,0x27,0x2a,0x22,0x29,0x21,\
0x90,0x98,0x93,0x9b,0x96,0x9e,0x95,0x9d,0x9c,0x94,0x9f,0x97,0x9a,0x92,0x99,0x91,\
0x10,0x18,0x13,0x1b,0x16,0x1e,0x15,0x1d,0x1c,0x14,0x1f,0x17,0x1a,0x12,0x19,0x11},\
{0x00,0x09,0x01,0x08,0x02,0x0b,0x03,0x0a,0x04,0x0d,0x05,0x0c,0x06,0x0f,0x07,0x0e,\
0x90,0x99,0x91,0x98,0x92,0x9b,0x93,0x9a,0x94,0x9d,0x95,0x9c,0x96,0x9f,0x97,0x9e,\
0x10,0x19,0x11,0x18,0x12,0x1b,0x13,0x1a,0x14,0x1d,0x15,0x1c,0x16,0x1f,0x17,0x1e,\
0x80,0x89,0x81,0x88,0x82,0x8b,0x83,0x8a,0x84,0x8d,0x85,0x8c,0x86,0x8f,0x87,0x8e,\
0x20,0x29,0x21,0x28,0x22,0x2b,0x23,0x2a,0x24,0x2d,0x25,0x2c,0x26,0x2f,0x27,0x2e,\
0xb0,0xb9,0xb1,0xb8,0xb2,0xbb,0xb3,0xba,0xb4,0xbd,0xb5,0xbc,0xb6,0xbf,0xb7,0xbe,\
0x30,0x39,0x31,0x38,0x32,0x3b,0x33,0x3a,0x34,0x3d,0x35,0x3c,0x36,0x3f,0x37,0x3e,\
0xa0,0xa9,0xa1,0xa8,0xa2,0xab,0xa3,0xaa,0xa4,0xad,0xa5,0xac,0xa6,0xaf,0xa7,0xae,\
0x40,0x49,0x41,0x48,0x42,0x4b,0x43,0x4a,0x44,0x4d,0x45,0x4c,0x46,0x4f,0x47,0x4e,\
0xd0,0xd9,0xd1,0xd8,0xd2,0xdb,0xd3,0xda,0xd4,0xdd,0xd5,0xdc,0xd6,0xdf,0xd7,0xde,\
0x50,0x59,0x51,0x58,0x52,0x5b,0x53,0x5a,0x54,0x5d,0x55,0x5c,0x56,0x5f,0x57,0x5e,\
0xc0,0xc9,0xc1,0xc8,0xc2,0xcb,0xc3,0xca,0xc4,0xcd,0xc5,0xcc,0xc6,0xcf,0xc7,0xce,\
0x60,0x69,0x61,0x68,0x62,0x6b,0x63,0x6a,0x64,0x6d,0x65,0x6c,0x66,0x6f,0x67,0x6e,\
0xf0,0xf9,0xf1,0xf8,0xf2,0xfb,0xf3,0xfa,0xf4,0xfd,0xf5,0xfc,0xf6,0xff,0xf7,0xfe,\
0x70,0x79,0x71,0x78,0x72,0x7b,0x73,0x7a,0x74,0x7d,0x75,0x7c,0x76,0x7f,0x77,0x7e,\
0xe0,0xe9,0xe1,0xe8,0xe2,0xeb,0xe3,0xea,0xe4,0xed,0xe5,0xec,0xe6,0xef,0xe7,0xee},\
{0x00,0x0a,0x07,0x0d,0x0e,0x04,0x09,0x03,0x0f,0x05,0x08,0x02,0x01,0x0b,0x06,0x0c,\
0xa0,0xaa,0xa7,0xad,0xae,0xa4,0xa9,0xa3,0xaf,0xa5,0xa8,0xa2,0xa1,0xab,0xa6,0xac,\
0x70,0x7a,0x77,0x7d,0x7e,0x74,0x79,0x73,0x7f,0x75,0x78,0x72,0x71,0x7b,0x76,0x7c,\
0xd0,0xda,0xd7,0xdd,0xde,0xd4,0xd9,0xd3,0xdf,0xd5,0xd8,0xd2,0xd1,0xdb,0xd6,0xdc,\
0xe0,0xea,0xe7,0xed,0xee,0xe4,0xe9,0xe3,0xef,0xe5,0xe8,0xe2,0xe1,0xeb,0xe6,0xec,\
0x40,0x4a,0x47,0x4d,0x4e,0x44,0x49,0x43,0x4f,0x45,0x48,0x42,0x41,0x4b,0x46,0x4c,\
0x90,0x9a,0x97,0x9d,0x9e,0x94,0x99,0x93,0x9f,0x95,0x98,0x92,0x91,0x9b,0x96,0x9c,\
0x30,0x3a,0x37,0x3d,0x3e,0x34,0x39,0x33,0x3f,0x35,0x38,0x32,0x31,0x3b,0x36,0x3c,\
0xf0,0xfa,0xf7,0xfd,0xfe,0xf4,0xf9,0xf3,0xff,0xf5,0xf8,0xf2,0xf1,0xfb,0xf6,0xfc,\
0x50,0x5a,0x57,0x5d,0x5e,0x54,0x59,0x53,0x5f,0x55,0x58,0x52,0x51,0x5b,0x56,0x5c,\
0x80,0x8a,0x87,0x8d,0x8e,0x84,0x89,0x83,0x8f,0x85,0x88,0x82,0x81,0x8b,0x86,0x8c,\
0x20,0x2a,0x27,0x2d,0x2e,0x24,0x29,0x23,0x2f,0x25,0x28,0x22,0x21,0x2b,0x26,0x2c,\
0x10,0x1a,0x17,0x1d,0x1e,0x14,0x19,0x13,0x1f,0x15,0x18,0x12,0x11,0x1b,0x16,0x1c,\
0xb0,0xba,0xb7,0xbd,0xbe,0xb4,0xb9,0xb3,0xbf,0xb5,0xb8,0xb2,0xb1,0xbb,0xb6,0xbc,\
0x60,0x6a,0x67,0x6d,0x6e,0x64,0x69,0x63,0x6f,0x65,0x68,0x62,0x61,0x6b,0x66,0x6c,\
0xc0,0xca,0xc7,0xcd,0xce,0xc4,0xc9,0xc3,0xcf,0xc5,0xc8,0xc2,0xc1,0xcb,0xc6,0xcc},\
{0x00,0x0b,0x05,0x0e,0x0a,0x01,0x0f,0x04,0x07,0x0c,0x02,0x09,0x0d,0x06,0x08,0x03,\
0xb0,0xbb,0xb5,0xbe,0xba,0xb1,0xbf,0xb4,0xb7,0xbc,0xb2,0xb9,0xbd,0xb6,0xb8,0xb3,\
0x50,0x5b,0x55,0x5e,0x5a,0x51,0x5f,0x54,0x57,0x5c,0x52,0x59,0x5d,0x56,0x58,0x53,\
0xe0,0xeb,0xe5,0xee,0xea,0xe1,0xef,0xe4,0xe7,0xec,0xe2,0xe9,0xed,0xe6,0xe8,0xe3,\
0xa0,0xab,0xa5,0xae,0xaa,0xa1,0xaf,0xa4,0xa7,0xac,0xa2,0xa9,0xad,0xa6,0xa8,0xa3,\
0x10,0x1b,0x15,0x1e,0x1a,0x11,0x1f,0x14,0x17,0x1c,0x12,0x19,0x1d,0x16,0x18,0x13,\
0xf0,0xfb,0xf5,0xfe,0xfa,0xf1,0xff,0xf4,0xf7,0xfc,0xf2,0xf9,0xfd,0xf6,0xf8,0xf3,\
0x40,0x4b,0x45,0x4e,0x4a,0x41,0x4f,0x44,0x47,0x4c,0x42,0x49,0x4d,0x46,0x48,0x43,\
0x70,0x7b,0x75,0x7e,0x7a,0x71,0x7f,0x74,0x77,0x7c,0x72,0x79,0x7d,0x76,0x78,0x73,\
0xc0,0xcb,0xc5,0xce,0xca,0xc1,0xcf,0xc4,0xc7,0xcc,0xc2,0xc9,0xcd,0xc6,0xc8,0xc3,\
0x20,0x2b,0x25,0x2e,0x2a,0x21,0x2f,0x24,0x27,0x2c,0x22,0x29,0x2d,0x26,0x28,0x23,\
0x90,0x9b,0x95,0x9e,0x9a,0x91,0x9f,0x94,0x97,0x9c,0x92,0x99,0x9d,0x96,0x98,0x93,\
0xd0,0xdb,0xd5,0xde,0xda,0xd1,0xdf,0xd4,0xd7,0xdc,0xd2,0xd9,0xdd,0xd6,0xd8,0xd3,\
0x60,0x6b,0x65,0x6e,0x6a,0x61,0x6f,0x64,0x67,0x6c,0x62,0x69,0x6d,0x66,0x68,0x63,\
0x80,0x8b,0x85,0x8e,0x8a,0x81,0x8f,0x84,0x87,0x8c,0x82,0x89,0x8d,0x86,0x88,0x83,\
0x30,0x3b,0x35,0x3e,0x3a,0x31,0x3f,0x34,0x37,0x3c,0x32,0x39,0x3d,0x36,0x38,0x33},\
{0x00,0x0c,0x0b,0x07,0x05,0x09,0x0e,0x02,0x0a,0x06,0x01,0x0d,0x0f,0x03,0x04,0x08,\
0xc0,0xcc,0xcb,0xc7,0xc5,0xc9,0xce,0xc2,0xca,0xc6,0xc1,0xcd,0xcf,0xc3,0xc4,0xc8,\
0xb0,0xbc,0xbb,0xb7,0xb5,0xb9,0xbe,0xb2,0xba,0xb6,0xb1,0xbd,0xbf,0xb3,0xb4,0xb8,\
0x70,0x7c,0x7b,0x77,0x75,0x79,0x7e,0x72,0x7a,0x76,0x71,0x7d,0x7f,0x73,0x74,0x78,\
0x50,0x5c,0x5b,0x57,0x55,0x59,0x5e,0x52,0x5a,0x56,0x51,0x5d,0x5f,0x53,0x54,0x58,\
0x90,0x9c,0x9b,0x97,0x95,0x99,0x9e,0x92,0x9a,0x96,0x91,0x9d,0x9f,0x93,0x94,0x98,\
0xe0,0xec,0xeb,0xe7,0xe5,0xe9,0xee,0xe2,0xea,0xe6,0xe1,0xed,0xef,0xe3,0xe4,0xe8,\
0x20,0x2c,0x2b,0x27,0x25,0x29,0x2e,0x22,0x2a,0x26,0x21,0x2d,0x2f,0x23,0x24,0x28,\
0xa0,0xac,0xab,0xa7,0xa5,0xa9,0xae,0xa2,0xaa,0xa6,0xa1,0xad,0xaf,0xa3,0xa4,0xa8,\
0x60,0x6c,0x6b,0x67,0x65,0x69,0x6e,0x62,0x6a,0x66,0x61,0x6d,0x6f,0x63,0x64,0x68,\
0x10,0x1c,0x1b,0x17,0x15,0x19,0x1e,0x12,0x1a,0x16,0x11,0x1d,0x1f,0x13,0x14,0x18,\
0xd0,0xdc,0xdb,0xd7,0xd5,0xd9,0xde,0xd2,0xda,0xd6,0xd1,0xdd,0xdf,0xd3,0xd4,0xd8,\
0xf0,0xfc,0xfb,0xf7,0xf5,0xf9,0xfe,0xf2,0xfa,0xf6,0xf1,0xfd,0xff,0xf3,0xf4,0xf8,\
0x30,0x3c,0x3b,0x37,0x35,0x39,0x3e,0x32,0x3a,0x36,0x31,0x3d,0x3f,0x33,0x34,0x38,\
0x40,0x4c,0x4b,0x47,0x45,0x49,0x4e,0x42,0x4a,0x46,0x41,0x4d,0x4f,0x43,0x44,0x48,\
0x80,0x8c,0x8b,0x87,0x85,0x89,0x8e,0x82,0x8a,0x86,0x81,0x8d,0x8f,0x83,0x84,0x88},\
{0x00,0x0d,0x09,0x04,0x01,0x0c,0x08,0x05,0x02,0x0f,0x0b,0x06,0x03,0x0e,0x0a,0x07,\
0xd0,0xdd,0xd9,0xd4,0xd1,0xdc,0xd8,0xd5,0xd2,0xdf,0xdb,0xd6,0xd3,0xde,0xda,0xd7,\
0x90,0x9d,0x99,0x94,0x91,0x9c,0x98,0x95,0x92,0x9f,0x9b,0x96,0x93,0x9e,0x9a,0x97,\
0x40,0x4d,0x49,0x44,0x41,0x4c,0x48,0x45,0x42,0x4f,0x4b,0x46,0x43,0x4e,0x4a,0x47,\
0x10,0x1d,0x19,0x14,0x11,0x1c,0x18,0x15,0x12,0x1f,0x1b,0x16,0x13,0x1e,0x1a,0x17,\
0xc0,0xcd,0xc9,0xc4,0xc1,0xcc,0xc8,0xc5,0xc2,0xcf,0xcb,0xc6,0xc3,0xce,0xca,0xc7,\
0x80,0x8d,0x89,0x84,0x81,0x8c,0x88,0x85,0x82,0x8f,0x8b,0x86,0x83,0x8e,0x8a,0x87,\
0x50,0x5d,0x59,0x54,0x51,0x5c,0x58,0x55,0x52,0x5f,0x5b,0x56,0x53,0x5e,0x5a,0x57,\
0x20,0x2d,0x29,0x24,0x21,0x2c,0x28,0x25,0x22,0x2f,0x2b,0x26,0x23,0x2e,0x2a,0x27,\
0xf0,0xfd,0xf9,0xf4,0xf1,0xfc,0xf8,0xf5,0xf2,0xff,0xfb,0xf6,0xf3,0xfe,0xfa,0xf7,\
0xb0,0xbd,0xb9,0xb4,0xb1,0xbc,0xb8,0xb5,0xb2,0xbf,0xbb,0xb6,0xb3,0xbe,0xba,0xb7,\
0x60,0x6d,0x69,0x64,0x61,0x6c,0x68,0x65,0x62,0x6f,0x6b,0x66,0x63,0x6e,0x6a,0x67,\
0x30,0x3d,0x39,0x34,0x31,0x3c,0x38,0x35,0x32,0x3f,0x3b,0x36,0x33,0x3e,0x3a,0x37,\
0xe0,0xed,0xe9,0xe4,0xe1,0xec,0xe8,0xe5,0xe2,0xef,0xeb,0xe6,0xe3,0xee,0xea,0xe7,\
0xa0,0xad,0xa9,0xa4,0xa1,0xac,0xa8,0xa5,0xa2,0xaf,0xab,0xa6,0xa3,0xae,0xaa,0xa7,\
0x70,0x7d,0x79,0x74,0x71,0x7c,0x78,0x75,0x72,0x7f,0x7b,0x76,0x73,0x7e,0x7a,0x77},\
{0x00,0x0e,0x0f,0x01,0x0d,0x03,0x02,0x0c,0x09,0x07,0x06,0x08,0x04,0x0a,0x0b,0x05,\
0xe0,0xee,0xef,0xe1,0xed,0xe3,0xe2,0xec,0xe9,0xe7,0xe6,0xe8,0xe4,0xea,0xeb,0xe5,\
0xf0,0xfe,0xff,0xf1,0xfd,0xf3,0xf2,0xfc,0xf9,0xf7,0xf6,0xf8,0xf4,0xfa,0xfb,0xf5,\
0x10,0x1e,0x1f,0x11,0x1d,0x13,0x12,0x1c,0x19,0x17,0x16,0x18,0x14,0x1a,0x1b,0x15,\
0xd0,0xde,0xdf,0xd1,0xdd,0xd3,0xd2,0xdc,0xd9,0xd7,0xd6,0xd8,0xd4,0xda,0xdb,0xd5,\
0x30,0x3e,0x3f,0x31,0x3d,0x33,0x32,0x3c,0x39,0x37,0x36,0x38,0x34,0x3a,0x3b,0x35,\
0x20,0x2e,0x2f,0x21,0x2d,0x23,0x22,0x2c,0x29,0x27,0x26,0x28,0x24,0x2a,0x2b,0x25,\
0xc0,0xce,0xcf,0xc1,0xcd,0xc3,0xc2,0xcc,0xc9,0xc7,0xc6,0xc8,0xc4,0xca,0xcb,0xc5,\
0x90,0x9e,0x9f,0x91,0x9d,0x93,0x92,0x9c,0x99,0x97,0x96,0x98,0x94,0x9a,0x9b,0x95,\
0x70,0x7e,0x7f,0x71,0x7d,0x73,0x72,0x7c,0x79,0x77,0x76,0x78,0x74,0x7a,0x7b,0x75,\
0x60,0x6e,0x6f,0x61,0x6d,0x63,0x62,0x6c,0x69,0x67,0x66,0x68,0x64,0x6a,0x6b,0x65,\
0x80,0x8e,0x8f,0x81,0x8d,0x83,0x82,0x8c,0x89,0x87,0x86,0x88,0x84,0x8a,0x8b,0x85,\
0x40,0x4e,0x4f,0x41,0x4d,0x43,0x42,0x4c,0x49,0x47,0x46,0x48,0x44,0x4a,0x4b,0x45,\
0xa0,0xae,0xaf,0xa1,0xad,0xa3,0xa2,0xac,0xa9,0xa7,0xa6,0xa8,0xa4,0xaa,0xab,0xa5,\
0xb0,0xbe,0xbf,0xb1,0xbd,0xb3,0xb2,0xbc,0xb9,0xb7,0xb6,0xb8,0xb4,0xba,0xbb,0xb5,\
0x50,0x5e,0x5f,0x51,0x5d,0x53,0x52,0x5c,0x59,0x57,0x56,0x58,0x54,0x5a,0x5b,0x55},\
{0x00,0x0f,0x0d,0x02,0x09,0x06,0x04,0x0b,0x01,0x0e,0x0c,0x03,0x08,0x07,0x05,0x0a,\
0xf0,0xff,0xfd,0xf2,0xf9,0xf6,0xf4,0xfb,0xf1,0xfe,0xfc,0xf3,0xf8,0xf7,0xf5,0xfa,\
0xd0,0xdf,0xdd,0xd2,0xd9,0xd6,0xd4,0xdb,0xd1,0xde,0xdc,0xd3,0xd8,0xd7,0xd5,0xda,\
0x20,0x2f,0x2d,0x22,0x29,0x26,0x24,0x2b,0x21,0x2e,0x2c,0x23,0x28,0x27,0x25,0x2a,\
0x90,0x9f,0x9d,0x92,0x99,0x96,0x94,0x9b,0x91,0x9e,0x9c,0x93,0x98,0x97,0x95,0x9a,\
0x60,0x6f,0x6d,0x62,0x69,0x66,0x64,0x6b,0x61,0x6e,0x6c,0x63,0x68,0x67,0x65,0x6a,\
0x40,0x4f,0x4d,0x42,0x49,0x46,0x44,0x4b,0x41,0x4e,0x4c,0x43,0x48,0x47,0x45,0x4a,\
0xb0,0xbf,0xbd,0xb2,0xb9,0xb6,0xb4,0xbb,0xb1,0xbe,0xbc,0xb3,0xb8,0xb7,0xb5,0xba,\
0x10,0x1f,0x1d,0x12,0x19,0x16,0x14,0x1b,0x11,0x1e,0x1c,0x13,0x18,0x17,0x15,0x1a,\
0xe0,0xef,0xed,0xe2,0xe9,0xe6,0xe4,0xeb,0xe1,0xee,0xec,0xe3,0xe8,0xe7,0xe5,0xea,\
0xc0,0xcf,0xcd,0xc2,0xc9,0xc6,0xc4,0xcb,0xc1,0xce,0xcc,0xc3,0xc8,0xc7,0xc5,0xca,\
0x30,0x3f,0x3d,0x32,0x39,0x36,0x34,0x3b,0x31,0x3e,0x3c,0x33,0x38,0x37,0x35,0x3a,\
0x80,0x8f,0x8d,0x82,0x89,0x86,0x84,0x8b,0x81,0x8e,0x8c,0x83,0x88,0x87,0x85,0x8a,\
0x70,0x7f,0x7d,0x72,0x79,0x76,0x74,0x7b,0x71,0x7e,0x7c,0x73,0x78,0x77,0x75,0x7a,\
0x50,0x5f,0x5d,0x52,0x59,0x56,0x54,0x5b,0x51,0x5e,0x5c,0x53,0x58,0x57,0x55,0x5a,\
0xa0,0xaf,0xad,0xa2,0xa9,0xa6,0xa4,0xab,0xa1,0xae,0xac,0xa3,0xa8,0xa7,0xa5,0xaa}\
}

#ifdef __x86_64__
#define MOEPGF16_SHUFFLE_LOW_TABLE { \
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},\
{0x00,0x01,0x02,0x03,0x04,0x05,0x06,0x07,0x08,0x09,0x0a,0x0b,0x0c,0x0d,0x0e,0x0f},\
{0x00,0x02,0x04,0x06,0x08,0x0a,0x0c,0x0e,0x03,0x01,0x07,0x05,0x0b,0x09,0x0f,0x0d},\
{0x00,0x03,0x06,0x05,0x0c,0x0f,0x0a,0x09,0x0b,0x08,0x0d,0x0e,0x07,0x04,0x01,0x02},\
{0x00,0x04,0x08,0x0c,0x03,0x07,0x0b,0x0f,0x06,0x02,0x0e,0x0a,0x05,0x01,0x0d,0x09},\
{0x00,0x05,0x0a,0x0f,0x07,0x02,0x0d,0x08,0x0e,0x0b,0x04,0x01,0x09,0x0c,0x03,0x06},\
{0x00,0x06,0x0c,0x0a,0x0b,0x0d,0x07,0x01,0x05,0x03,0x09,0x0f,0x0e,0x08,0x02,0x04},\
{0x00,0x07,0x0e,0x09,0x0f,0x08,0x01,0x06,0x0d,0x0a,0x03,0x04,0x02,0x05,0x0c,0x0b},\
{0x00,0x08,0x03,0x0b,0x06,0x0e,0x05,0x0d,0x0c,0x04,0x0f,0x07,0x0a,0x02,0x09,0x01},\
{0x00,0x09,0x01,0x08,0x02,0x0b,0x03,0x0a,0x04,0x0d,0x05,0x0c,0x06,0x0f,0x07,0x0e},\
{0x00,0x0a,0x07,0x0d,0x0e,0x04,0x09,0x03,0x0f,0x05,0x08,0x02,0x01,0x0b,0x06,0x0c},\
{0x00,0x0b,0x05,0x0e,0x0a,0x01,0x0f,0x04,0x07,0x0c,0x02,0x09,0x0d,0x06,0x08,0x03},\
{0x00,0x0c,0x0b,0x07,0x05,0x09,0x0e,0x02,0x0a,0x06,0x01,0x0d,0x0f,0x03,0x04,0x08},\
{0x00,0x0d,0x09,0x04,0x01,0x0c,0x08,0x05,0x02,0x0f,0x0b,0x06,0x03,0x0e,0x0a,0x07},\
{0x00,0x0e,0x0f,0x01,0x0d,0x03,0x02,0x0c,0x09,0x07,0x06,0x08,0x04,0x0a,0x0b,0x05},\
{0x00,0x0f,0x0d,0x02,0x09,0x06,0x04,0x0b,0x01,0x0e,0x0c,0x03,0x08,0x07,0x05,0x0a}\
}
#define MOEPGF16_SHUFFLE_HIGH_TABLE { \
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},\
{0x00,0x10,0x20,0x30,0x40,0x50,0x60,0x70,0x80,0x90,0xa0,0xb0,0xc0,0xd0,0xe0,0xf0},\
{0x00,0x20,0x40,0x60,0x80,0xa0,0xc0,0xe0,0x30,0x10,0x70,0x50,0xb0,0x90,0xf0,0xd0},\
{0x00,0x30,0x60,0x50,0xc0,0xf0,0xa0,0x90,0xb0,0x80,0xd0,0xe0,0x70,0x40,0x10,0x20},\
{0x00,0x40,0x80,0xc0,0x30,0x70,0xb0,0xf0,0x60,0x20,0xe0,0xa0,0x50,0x10,0xd0,0x90},\
{0x00,0x50,0xa0,0xf0,0x70,0x20,0xd0,0x80,0xe0,0xb0,0x40,0x10,0x90,0xc0,0x30,0x60},\
{0x00,0x60,0xc0,0xa0,0xb0,0xd0,0x70,0x10,0x50,0x30,0x90,0xf0,0xe0,0x80,0x20,0x40},\
{0x00,0x70,0xe0,0x90,0xf0,0x80,0x10,0x60,0xd0,0xa0,0x30,0x40,0x20,0x50,0xc0,0xb0},\
{0x00,0x80,0x30,0xb0,0x60,0xe0,0x50,0xd0,0xc0,0x40,0xf0,0x70,0xa0,0x20,0x90,0x10},\
{0x00,0x90,0x10,0x80,0x20,0xb0,0x30,0xa0,0x40,0xd0,0x50,0xc0,0x60,0xf0,0x70,0xe0},\
{0x00,0xa0,0x70,0xd0,0xe0,0x40,0x90,0x30,0xf0,0x50,0x80,0x20,0x10,0xb0,0x60,0xc0},\
{0x00,0xb0,0x50,0xe0,0xa0,0x10,0xf0,0x40,0x70,0xc0,0x20,0x90,0xd0,0x60,0x80,0x30},\
{0x00,0xc0,0xb0,0x70,0x50,0x90,0xe0,0x20,0xa0,0x60,0x10,0xd0,0xf0,0x30,0x40,0x80},\
{0x00,0xd0,0x90,0x40,0x10,0xc0,0x80,0x50,0x20,0xf0,0xb0,0x60,0x30,0xe0,0xa0,0x70},\
{0x00,0xe0,0xf0,0x10,0xd0,0x30,0x20,0xc0,0x90,0x70,0x60,0x80,0x40,0xa0,0xb0,0x50},\
{0x00,0xf0,0xd0,0x20,0x90,0x60,0x40,0xb0,0x10,0xe0,0xc0,0x30,0x80,0x70,0x50,0xa0}\
}
#endif //__x86_64__

#ifdef __arm__
#define MOEPGF16_SHUFFLE_LOW_TABLE { \
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},\
{0x00,0x08,0x01,0x09,0x02,0x0a,0x03,0x0b,0x04,0x0c,0x05,0x0d,0x06,0x0e,0x07,0x0f},\
{0x00,0x03,0x02,0x01,0x04,0x07,0x06,0x05,0x08,0x0b,0x0a,0x09,0x0c,0x0f,0x0e,0x0d},\
{0x00,0x0b,0x03,0x08,0x06,0x0d,0x05,0x0e,0x0c,0x07,0x0f,0x04,0x0a,0x01,0x09,0x02},\
{0x00,0x06,0x04,0x02,0x08,0x0e,0x0c,0x0a,0x03,0x05,0x07,0x01,0x0b,0x0d,0x0f,0x09},\
{0x00,0x0e,0x05,0x0b,0x0a,0x04,0x0f,0x01,0x07,0x09,0x02,0x0c,0x0d,0x03,0x08,0x06},\
{0x00,0x05,0x06,0x03,0x0c,0x09,0x0a,0x0f,0x0b,0x0e,0x0d,0x08,0x07,0x02,0x01,0x04},\
{0x00,0x0d,0x07,0x0a,0x0e,0x03,0x09,0x04,0x0f,0x02,0x08,0x05,0x01,0x0c,0x06,0x0b},\
{0x00,0x0c,0x08,0x04,0x03,0x0f,0x0b,0x07,0x06,0x0a,0x0e,0x02,0x05,0x09,0x0d,0x01},\
{0x00,0x04,0x09,0x0d,0x01,0x05,0x08,0x0c,0x02,0x06,0x0b,0x0f,0x03,0x07,0x0a,0x0e},\
{0x00,0x0f,0x0a,0x05,0x07,0x08,0x0d,0x02,0x0e,0x01,0x04,0x0b,0x09,0x06,0x03,0x0c},\
{0x00,0x07,0x0b,0x0c,0x05,0x02,0x0e,0x09,0x0a,0x0d,0x01,0x06,0x0f,0x08,0x04,0x03},\
{0x00,0x0a,0x0c,0x06,0x0b,0x01,0x07,0x0d,0x05,0x0f,0x09,0x03,0x0e,0x04,0x02,0x08},\
{0x00,0x02,0x0d,0x0f,0x09,0x0b,0x04,0x06,0x01,0x03,0x0c,0x0e,0x08,0x0a,0x05,0x07},\
{0x00,0x09,0x0e,0x07,0x0f,0x06,0x01,0x08,0x0d,0x04,0x03,0x0a,0x02,0x0b,0x0c,0x05},\
{0x00,0x01,0x0f,0x0e,0x0d,0x0c,0x02,0x03,0x09,0x08,0x06,0x07,0x04,0x05,0x0b,0x0a}\
}
#define MOEPGF16_SHUFFLE_HIGH_TABLE { \
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},\
{0x00,0x80,0x10,0x90,0x20,0xa0,0x30,0xb0,0x40,0xc0,0x50,0xd0,0x60,0xe0,0x70,0xf0},\
{0x00,0x30,0x20,0x10,0x40,0x70,0x60,0x50,0x80,0xb0,0xa0,0x90,0xc0,0xf0,0xe0,0xd0},\
{0x00,0xb0,0x30,0x80,0x60,0xd0,0x50,0xe0,0xc0,0x70,0xf0,0x40,0xa0,0x10,0x90,0x20},\
{0x00,0x60,0x40,0x20,0x80,0xe0,0xc0,0xa0,0x30,0x50,0x70,0x10,0xb0,0xd0,0xf0,0x90},\
{0x00,0xe0,0x50,0xb0,0xa0,0x40,0xf0,0x10,0x70,0x90,0x20,0xc0,0xd0,0x30,0x80,0x60},\
{0x00,0x50,0x60,0x30,0xc0,0x90,0xa0,0xf0,0xb0,0xe0,0xd0,0x80,0x70,0x20,0x10,0x40},\
{0x00,0xd0,0x70,0xa0,0xe0,0x30,0x90,0x40,0xf0,0x20,0x80,0x50,0x10,0xc0,0x60,0xb0},\
{0x00,0xc0,0x80,0x40,0x30,0xf0,0xb0,0x70,0x60,0xa0,0xe0,0x20,0x50,0x90,0xd0,0x10},\
{0x00,0x40,0x90,0xd0,0x10,0x50,0x80,0xc0,0x20,0x60,0xb0,0xf0,0x30,0x70,0xa0,0xe0},\
{0x00,0xf0,0xa0,0x50,0x70,0x80,0xd0,0x20,0xe0,0x10,0x40,0xb0,0x90,0x60,0x30,0xc0},\
{0x00,0x70,0xb0,0xc0,0x50,0x20,0xe0,0x90,0xa0,0xd0,0x10,0x60,0xf0,0x80,0x40,0x30},\
{0x00,0xa0,0xc0,0x60,0xb0,0x10,0x70,0xd0,0x50,0xf0,0x90,0x30,0xe0,0x40,0x20,0x80},\
{0x00,0x20,0xd0,0xf0,0x90,0xb0,0x40,0x60,0x10,0x30,0xc0,0xe0,0x80,0xa0,0x50,0x70},\
{0x00,0x90,0xe0,0x70,0xf0,0x60,0x10,0x80,0xd0,0x40,0x30,0xa0,0x20,0xb0,0xc0,0x50},\
{0x00,0x10,0xf0,0xe0,0xd0,0xc0,0x20,0x30,0x90,0x80,0x60,0x70,0x40,0x50,0xb0,0xa0}\
}
#endif //__arm__
#define MOEPGF16_ALOG_TABLE {\
0x01,0x02,0x04,0x08,0x03,0x06,0x0c,0x0b,0x05,0x0a,0x07,0x0e,0x0f,0x0d,0x09,0x01,\
0x02,0x04,0x08,0x03,0x06,0x0c,0x0b,0x05,0x0a,0x07,0x0e,0x0f,0x0d,0x09,0x01,\
}
#define MOEPGF16_LOG_TABLE {\
0x00,0x00,0x01,0x04,0x02,0x08,0x05,0x0a,0x03,0x0e,0x09,0x07,0x06,0x0d,0x0b,0x0c,\
}
