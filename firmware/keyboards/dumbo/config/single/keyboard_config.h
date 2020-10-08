/*
Copyright 2018-2020 <Pierre Constantineau>

3-Clause BSD License

Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the documentation and/or other materials provided with the distribution.

3. Neither the name of the copyright holder nor the names of its contributors may be used to endorse or promote products derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR 
A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT 
LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT 
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

*/
#ifndef KEYBOARD_CONFIG_H
#define KEYBOARD_CONFIG_H
#include "hardware_config.h"

// CHANGE THIS FOR THE KEYBOARD TO MATCH WHAT IS BEING FLASHED. OPTIONS: LEFT  RIGHT  SINGLE

#define DEVICE_NAME_M   "Dumbo"             /**< Name of device. Will be included in the advertising data. */
#define DEVICE_MODEL    "Dumbo"             /**< Name of device. Will be included in the advertising data. */
#define MANUFACTURER_NAME   "lemony.org"    /**< Manufacturer. Will be passed to Device Information Service. */
#define KEYBOARD_SIDE SINGLE
#define KEYMAP( \
      A1, A2, A3, A4, A5, A6, A7, A8, F1, F8, G1, G8, H1, H8, \
      B1, B2, B3, B4, B5, B6, B7, B8, F2, F7, G2, G7, H2, H7, \
      C1, C2, C3, C4, C5, C6, C7, C8, F3, F6, G3, G6, H3, \
      D1, D2, D3, D4, D5, D6, D7, D8, F4, F5, G4, G5, H4, H6, \
      E1, E2, E3, E4, E5, E6, E7, H5, E8 \
) { \
    {A1, A2, A3, A4, A5, A6, A7, A8}, \
    {B1, B2, B3, B4, B5, B6, B7, B8}, \
    {C1, C2, C3, C4, C5, C6, C7, C8}, \
    {D1, D2, D3, D4, D5, D6, D7, D8}, \
    {E1, E2, E3, E4, E5, E6, E7, E8}, \
    {F1, F2, F3, F4, F5, F6, F7, F8}, \
    {G1, G2, G3, G4, G5, G6, G7, G8}, \
    {H1, H2, H3, H4, H5, H6, H7, H8} \
}

#endif /* KEYBOARD_CONFIG_H */
