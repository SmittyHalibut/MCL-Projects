//
//
//  File Name   :  ROM_Emulator
//  Used on     :  
//  Author      :  Ted Fried, MicroCore Labs
//                 Updated for 39SF0x0 FLASH ROMs by Mark Smith, Halibut Electronics
//  Creation    :  3/20/2021
//
//   Description:
//   ============
//   
//  39SF0x0 EPROM Emulator. When Teensy 4.1 run at 816Mhz the address to 
// data access time is less than 200ns.
//
//------------------------------------------------------------------------
//
// Modification History:
// =====================
//
// Revision 1 3/20/2021
// Initial revision
//
// Revision 2 2023-07-09  Mark Smith
// Moving to Teensy 4.1
// Moving to PlatformIO
// Moving to 39SF0x0 board design (changing and adding pins)
//
//
//------------------------------------------------------------------------
//
// Copyright (c) 2021 Ted Fried
// 
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
// 
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
// 
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.
//
//------------------------------------------------------------------------

#include <stdint.h>
#include <macros.h>

// Teensy 4.1 pin assignments
#define PIN_DATA0          15
#define PIN_DATA1          14
#define PIN_DATA2          39
#define PIN_DATA3          38
#define PIN_DATA4          25
#define PIN_DATA5          24
#define PIN_DATA6          12
#define PIN_DATA7          11

#define PIN_ADDR0          16
#define PIN_ADDR1          17
#define PIN_ADDR2          18
#define PIN_ADDR3          19
#define PIN_ADDR4          20
#define PIN_ADDR5          21
#define PIN_ADDR6          22
#define PIN_ADDR7          23
#define PIN_ADDR8          7
#define PIN_ADDR9          8
#define PIN_ADDR10         10
#define PIN_ADDR11         9
#define PIN_ADDR12         4
#define PIN_ADDR13         6
#define PIN_ADDR14         5
#define PIN_ADDR15         2
#define PIN_ADDR16         1
#define PIN_ADDR17         3
#define PIN_ADDR18         0

uint8_t   memory_array[65536];

// Setup Teensy 4.1 IO's
//
void setup() {
    
    pinMode(PIN_DATA0,   OUTPUT);
    pinMode(PIN_DATA1,   OUTPUT);
    pinMode(PIN_DATA2,   OUTPUT);
    pinMode(PIN_DATA3,   OUTPUT);
    pinMode(PIN_DATA4,   OUTPUT);
    pinMode(PIN_DATA5,   OUTPUT);
    pinMode(PIN_DATA6,   OUTPUT);
    pinMode(PIN_DATA7,   OUTPUT);
    
    pinMode(PIN_ADDR0,   INPUT);
    pinMode(PIN_ADDR1,   INPUT);
    pinMode(PIN_ADDR2,   INPUT);
    pinMode(PIN_ADDR3,   INPUT);
    pinMode(PIN_ADDR4,   INPUT);
    pinMode(PIN_ADDR5,   INPUT);
    pinMode(PIN_ADDR6,   INPUT);
    pinMode(PIN_ADDR7,   INPUT);

    pinMode(PIN_ADDR8,   INPUT);
    pinMode(PIN_ADDR9,   INPUT);
    pinMode(PIN_ADDR10,  INPUT);
    pinMode(PIN_ADDR11,  INPUT);
    pinMode(PIN_ADDR12,  INPUT);
    pinMode(PIN_ADDR13,  INPUT);
    pinMode(PIN_ADDR14,  INPUT);
    pinMode(PIN_ADDR15,  INPUT);

    pinMode(PIN_ADDR16,  INPUT);
    pinMode(PIN_ADDR17,  INPUT);
    pinMode(PIN_ADDR18,  INPUT);

}


// -------------------------------------------------
//
// Main loop
//
// -------------------------------------------------
void loop() {

    register uint8_t   data_out; 
    register uint16_t  address; 

    register uint32_t  GPIO6_data=0;
    register uint32_t  GPIO7_data=0;
    //register uint32_t  GPIO8_data=0;
    register uint32_t  GPIO9_data=0;

    GPIO6_data = GPIO6_DR;
    GPIO7_data = GPIO7_DR;
    //GPIO8_data = GPIO7_DR;   // I know it's not being used. Verify this with `gcc -E -x c -I . ROM_Emulator_Code.ino
    GPIO9_data = GPIO9_DR;

    address = GET_PIN_16(0) | GET_PIN_17(1) | GET_PIN_18(2) | GET_PIN_19(3) | GET_PIN_20(4)
            | GET_PIN_21(5) | GET_PIN_22(6) | GET_PIN_23(7) | GET_PIN_7(8) | GET_PIN_8(9)
            | GET_PIN_10(10) | GET_PIN_9(11) | GET_PIN_4(12) | GET_PIN_6(13) | GET_PIN_5(14)
    //        | GET_PIN_2(15) | GET_PIN_1(16) | GET_PIN_3(17) | GET_PIN_0(18)
        ;
    //address = (0x7FFF & address);  // TODO Limiting to 32k ROM for now.
    
    data_out  = memory_array[address];

    GPIO6_DR = 0 PUT_GPIO6_PIN_15(0) PUT_GPIO6_PIN_14(1) PUT_GPIO6_PIN_39(2) PUT_GPIO6_PIN_38(3) PUT_GPIO6_PIN_25(4) PUT_GPIO6_PIN_24(5) PUT_GPIO6_PIN_12(6) PUT_GPIO6_PIN_11(7);
    GPIO7_DR = 0 PUT_GPIO7_PIN_15(0) PUT_GPIO7_PIN_14(1) PUT_GPIO7_PIN_39(2) PUT_GPIO7_PIN_38(3) PUT_GPIO7_PIN_25(4) PUT_GPIO7_PIN_24(5) PUT_GPIO7_PIN_12(6) PUT_GPIO7_PIN_11(7);
    // Not used with our current pin assignments. Verify this with `gcc -E -x c -I . ROM_Emulator_Code.ino`
    //GPIO8_DR = 0 PUT_GPIO8_PIN_15(0) PUT_GPIO8_PIN_14(1) PUT_GPIO8_PIN_39(2) PUT_GPIO8_PIN_38(3) PUT_GPIO8_PIN_25(4) PUT_GPIO8_PIN_24(5) PUT_GPIO8_PIN_12(6) PUT_GPIO8_PIN_11(7);
    //GPIO9_DR = 0 PUT_GPIO9_PIN_15(0) PUT_GPIO9_PIN_14(1) PUT_GPIO9_PIN_39(2) PUT_GPIO9_PIN_38(3) PUT_GPIO9_PIN_25(4) PUT_GPIO9_PIN_24(5) PUT_GPIO9_PIN_12(6) PUT_GPIO9_PIN_11(7);
 }
