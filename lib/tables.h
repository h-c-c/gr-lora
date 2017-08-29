/* -*- c++ -*- */
/*
 * Copyright 2017 Pieter Robyns.
 *
 * This is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 *
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this software; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 */

#ifndef TABLES_H
#define TABLES_H

namespace gr {
    namespace lora {

        /**
         *  Header whitening sequence
         */
        const uint8_t prng_header[] = {
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
        };

        /**
         *  Whitening sequence
         */
        const uint8_t prng_payload[] = {
            0xff, 0xff, 0x2d, 0xff, 0x78, 0xff, 0xe1, 0xff, 0x00, 0xff, 0xd2, 0x2d, 0x55, 0x78, 0x4b, 0xe1, 0x66, 0x00, 0x1e, 0xd2, 0xff, 0x55, 0x2d, 0x4b, 0x78, 0x66, 0xe1, 0x1e, 0xd2, 0xff, 0x87, 0x2d, 0xcc, 0x78, 0xaa, 0xe1, 0xb4, 0xd2, 0x99, 0x87, 0xe1, 0xcc, 0x00, 0xaa, 0x00, 0xb4, 0x00, 0x99, 0x00, 0xe1, 0xd2, 0x00, 0x55, 0x00, 0x99, 0x00, 0xe1, 0x00, 0xd2, 0xd2, 0x87, 0x55, 0x1e, 0x99, 0x2d, 0xe1, 0x78, 0xd2, 0xe1, 0x87, 0xd2, 0x1e, 0x55, 0x2d, 0x99, 0x78, 0x33, 0xe1, 0x55, 0xd2, 0x4b, 0x55, 0x66, 0x99, 0x1e, 0x33, 0x2d, 0x55, 0x78, 0x4b, 0xe1, 0x66, 0x00, 0x1e, 0x00, 0x2d, 0x00, 0x78, 0xd2, 0xe1, 0x87, 0x00, 0xcc, 0x00, 0x78, 0x00, 0x33, 0xd2, 0x55, 0x87, 0x99, 0xcc, 0x33, 0x78, 0x55, 0x33, 0x99, 0x55, 0x33, 0x99, 0x87, 0x33, 0xcc, 0x55, 0xaa, 0x99, 0x66, 0x33, 0x1e, 0x87, 0x2d, 0xcc, 0x78, 0xaa, 0x33, 0x66, 0x55, 0x1e, 0x99, 0x2d, 0xe1, 0x78, 0x00, 0x33, 0x00, 0x55, 0xd2, 0x99, 0x55, 0xe1, 0x4b, 0x00, 0xb4, 0x00, 0x4b, 0xd2, 0x66, 0x55, 0xcc, 0x4b, 0xaa, 0xb4, 0x66, 0x4b, 0xcc, 0x66, 0xaa, 0xcc, 0xb4, 0xaa, 0x4b, 0x66, 0x66, 0xcc, 0xcc, 0xaa, 0x78, 0xb4, 0x33, 0x4b, 0x55, 0x66, 0x4b, 0xcc, 0x66, 0x78, 0xcc, 0x33, 0x78, 0x55, 0xe1, 0x4b, 0x00, 0x66, 0xd2, 0xcc, 0x87, 0x78, 0x1e, 0xe1, 0xff, 0x00, 0xff, 0xd2, 0x2d, 0x87, 0xaa, 0x1e, 0x66, 0xff, 0xcc, 0xff, 0xaa, 0x2d, 0x66, 0xaa, 0x1e, 0x66, 0xff, 0xcc, 0x2d, 0xaa, 0xaa, 0x66, 0xb4, 0x1e, 0x4b, 0xff, 0x66, 0x2d, 0x1e, 0xaa, 0x2d, 0xb4, 0xaa, 0x4b, 0xb4, 0x66, 0x99, 0x1e, 0xe1, 0x2d, 0xd2, 0xaa, 0x55, 0xb4, 0x99, 0x99, 0xe1, 0xe1, 0x00, 0xd2, 0xd2, 0x55, 0x87, 0x99, 0xcc, 0xe1, 0xaa, 0x00, 0x66, 0xd2, 0xcc, 0x87, 0x78, 0xcc, 0xe1, 0xaa, 0xd2, 0x66, 0x87, 0xcc, 0x1e, 0x78, 0xff, 0xe1, 0x2d, 0xd2, 0x78, 0x87, 0x33, 0x1e, 0x87, 0xff, 0x1e, 0x2d, 0x2d, 0x78, 0x78, 0x33, 0x33, 0x87, 0x87, 0x1e, 0xcc, 0x2d, 0x78, 0x78, 0xe1, 0x33, 0xd2, 0x87, 0x55, 0xcc, 0x4b, 0x78, 0x66, 0xe1, 0xcc, 0xd2, 0xaa, 0x55, 0xb4, 0x4b, 0x99, 0x66, 0x33, 0xcc, 0x55, 0xaa, 0x99, 0xb4, 0xe1, 0x99, 0xd2, 0x33, 0x55, 0x55, 0x4b, 0x99, 0xb4, 0xe1, 0x99, 0xd2, 0x33, 0x55, 0x55, 0x4b, 0x4b, 0xb4, 0xb4, 0x99, 0x4b, 0x33, 0xb4, 0x55, 0x99, 0x4b, 0x33, 0xb4, 0x87, 0x4b, 0x1e, 0xb4, 0x2d, 0x99, 0xaa, 0x33, 0x66, 0x87, 0x1e, 0x1e, 0x2d, 0x2d, 0xaa, 0xaa, 0x66, 0x66, 0xcc, 0x1e, 0x78, 0x2d, 0x33, 0xaa, 0x87, 0x66, 0x1e, 0xcc, 0xff, 0x78, 0x2d, 0x33, 0xaa, 0x87, 0x66, 0x1e, 0x1e, 0xff, 0xff, 0x2d, 0xff, 0xaa, 0xff, 0x66, 0x2d, 0x1e, 0xaa, 0xff, 0xb4, 0xff, 0x99, 0xff, 0x33, 0x2d, 0x87, 0xaa, 0xcc, 0xb4, 0x78, 0x99, 0x33, 0x33, 0x87, 0x87, 0xcc, 0xcc, 0xaa, 0x78, 0xb4, 0x33, 0x4b, 0x87, 0xb4, 0xcc, 0x99, 0xaa, 0xe1, 0xb4, 0xd2, 0x4b, 0x87, 0xb4, 0xcc, 0x99, 0x78, 0xe1, 0xe1, 0xd2, 0x00, 0x87, 0x00, 0xcc, 0xd2, 0x78, 0x87, 0xe1, 0x1e, 0x00, 0x2d, 0x00, 0xaa, 0xd2, 0xb4, 0x87, 0x4b, 0x1e, 0xb4, 0x2d, 0x4b, 0xaa, 0xb4, 0xb4, 0x4b, 0x4b, 0x66, 0xb4, 0x1e, 0x4b, 0xff, 0xb4, 0xff, 0x4b, 0x2d, 0x66, 0x78, 0x1e, 0x33, 0xff, 0x55, 0xff, 0x4b, 0x2d, 0xb4, 0x78, 0x99, 0x33, 0xe1, 0x55, 0x00, 0x4b, 0xd2, 0xb4, 0x55, 0x99, 0x99, 0xe1, 0x33, 0x00, 0x87, 0xd2, 0x1e, 0x55, 0xff, 0x99, 0xff, 0x33, 0xff, 0x87, 0xff, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x87, 0xe1, 0xaa, 0xcc,

            /*0xff, 0xff, 0x2e, 0xff, 0x5c, 0xff, 0xe8, 0xff, 0x00, 0xff, 0xd1, 0x2e, 0x72, 0x5c, 0x65, 0xe8, 0x4b, 0x00, 0x17, 0xd1, 0xff, 0x72, 0x2e, 0x65, 0x5c, 0x4b, 0xe8, 0x17, 0xd1, 0xff, 0xa3, 0x2e, 0xc6, 0x5c, 0x8d, 0xe8, 0x9a, 0xd1, 0xb4, 0xa3, 0xe8, 0xc6, 0x00, 0x8d, 0x00, 0x9a, 0x00, 0xb4, 0x00, 0xe8, 0xd1, 0x00, 0x72, 0x00, 0xb4, 0x00, 0xe8, 0x00, 0xd1, 0xd1, 0xa3, 0x72, 0x17, 0xb4, 0x2e, 0xe8, 0x5c, 0xd1, 0xe8, 0xa3, 0xd1, 0x17, 0x72, 0x2e, 0xb4, 0x5c, 0x39, 0xe8, 0x72, 0xd1, 0x65, 0x72, 0x4b, 0xb4, 0x17, 0x39, 0x2e, 0x72, 0x5c, 0x65, 0xe8, 0x4b, 0x00, 0x17, 0x00, 0x2e, 0x00, 0x5c, 0xd1, 0xe8, 0xa3, 0x00, 0xc6, 0x00, 0x5c, 0x00, 0x39, 0xd1, 0x72, 0xa3, 0xb4, 0xc6, 0x39, 0x5c, 0x72, 0x39, 0xb4, 0x72, 0x39, 0xb4, 0xa3, 0x39, 0xc6, 0x72, 0x8d, 0xb4, 0x4b, 0x39, 0x17, 0xa3, 0x2e, 0xc6, 0x5c, 0x8d, 0x39, 0x4b, 0x72, 0x17, 0xb4, 0x2e, 0xe8, 0x5c, 0x00, 0x39, 0x00, 0x72, 0xd1, 0xb4, 0x72, 0xe8, 0x65, 0x00, 0x9a, 0x00, 0x65, 0xd1, 0x4b, 0x72, 0xc6, 0x65, 0x8d, 0x9a, 0x4b, 0x65, 0xc6, 0x4b, 0x8d, 0xc6, 0x9a, 0x8d, 0x65, 0x4b, 0x4b, 0xc6, 0xc6, 0x8d, 0x5c, 0x9a, 0x39, 0x65, 0x72, 0x4b, 0x65, 0xc6, 0x4b, 0x5c, 0xc6, 0x39, 0x5c, 0x72, 0xe8, 0x65, 0x00, 0x4b, 0xd1, 0xc6, 0xa3, 0x5c, 0x17, 0xe8, 0xff, 0x00, 0xff, 0xd1, 0x2e, 0xa3, 0x8d, 0x17, 0x4b, 0xff, 0xc6, 0xff, 0x8d, 0x2e, 0x4b, 0x8d, 0x17, 0x4b, 0xff, 0xc6, 0x2e, 0x8d, 0x8d, 0x4b, 0x9a, 0x17, 0x65, 0xff, 0x4b, 0x2e, 0x17, 0x8d, 0x2e, 0x9a, 0x8d, 0x65, 0x9a, 0x4b, 0xb4, 0x17, 0xe8, 0x2e, 0xd1, 0x8d, 0x72, 0x9a, 0xb4, 0xb4, 0xe8, 0xe8, 0x00, 0xd1, 0xd1, 0x72, 0xa3, 0xb4*/
        };
    }
}

#endif /* TABLES_H */
