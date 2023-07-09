// Macros for efficient bit manipulation. Magic constants (GPIOx and bit numbers) are from:
// https://github.com/KurtE/TeensyDocuments/blob/master/Teensy4.1%20Pins.pdf

// Pin: 0  GPIO6 bit: 3
#define GET_PIN_0(b)  (GPIO6_data && 0x00000008 >> (3 - b))   // 1.3
#define PUT_GPIO6_PIN_0(b)  | (data_out && 0x00000008 >> (3 - b))
#define PUT_GPIO7_PIN_0(b)
#define PUT_GPIO8_PIN_0(b)
#define PUT_GPIO9_PIN_0(b)
// Pin: 1  GPIO6 bit: 2
#define GET_PIN_1(b)  (GPIO6_data && 0x00000004 >> (2 - b))   // 1.2
#define PUT_GPIO6_PIN_1(b)  | (data_out && 0x00000004 >> (2 - b))
#define PUT_GPIO7_PIN_1(b)
#define PUT_GPIO8_PIN_1(b)
#define PUT_GPIO9_PIN_1(b)
// Pin: 2  GPIO9 bit: 4
#define GET_PIN_2(b)  (GPIO9_data && 0x00000010 >> (4 - b))   // 4.4
#define PUT_GPIO6_PIN_2(b)
#define PUT_GPIO7_PIN_2(b)
#define PUT_GPIO8_PIN_2(b)
#define PUT_GPIO9_PIN_2(b)  | (data_out && 0x00000010 >> (4 - b))
// Pin: 3  GPIO9 bit: 5
#define GET_PIN_3(b)  (GPIO9_data && 0x00000020 >> (5 - b))   // 4.5
#define PUT_GPIO6_PIN_3(b)
#define PUT_GPIO7_PIN_3(b)
#define PUT_GPIO8_PIN_3(b)
#define PUT_GPIO9_PIN_3(b)  | (data_out && 0x00000020 >> (5 - b))
// Pin: 4  GPIO9 bit: 6
#define GET_PIN_4(b)  (GPIO9_data && 0x00000040 >> (6 - b))   // 4.6
#define PUT_GPIO6_PIN_4(b)
#define PUT_GPIO7_PIN_4(b)
#define PUT_GPIO8_PIN_4(b)
#define PUT_GPIO9_PIN_4(b)  | (data_out && 0x00000040 >> (6 - b))
// Pin: 5  GPIO9 bit: 8
#define GET_PIN_5(b)  (GPIO9_data && 0x00000100 >> (8 - b))   // 4.8
#define PUT_GPIO6_PIN_5(b)
#define PUT_GPIO7_PIN_5(b)
#define PUT_GPIO8_PIN_5(b)
#define PUT_GPIO9_PIN_5(b)  | (data_out && 0x00000100 >> (8 - b))
// Pin: 6  GPIO7 bit: 10
#define GET_PIN_6(b)  (GPIO7_data && 0x00000400 >> (10 - b))   // 2.10
#define PUT_GPIO6_PIN_6(b)
#define PUT_GPIO7_PIN_6(b)  | (data_out && 0x00000400 >> (10 - b))
#define PUT_GPIO8_PIN_6(b)
#define PUT_GPIO9_PIN_6(b)
// Pin: 7  GPIO7 bit: 17
#define GET_PIN_7(b)  (GPIO7_data && 0x00020000 >> (17 - b))   // 2.17
#define PUT_GPIO6_PIN_7(b)
#define PUT_GPIO7_PIN_7(b)  | (data_out && 0x00020000 >> (17 - b))
#define PUT_GPIO8_PIN_7(b)
#define PUT_GPIO9_PIN_7(b)
// Pin: 8  GPIO7 bit: 16
#define GET_PIN_8(b)  (GPIO7_data && 0x00010000 >> (16 - b))   // 2.16
#define PUT_GPIO6_PIN_8(b)
#define PUT_GPIO7_PIN_8(b)  | (data_out && 0x00010000 >> (16 - b))
#define PUT_GPIO8_PIN_8(b)
#define PUT_GPIO9_PIN_8(b)
// Pin: 9  GPIO7 bit: 11
#define GET_PIN_9(b)  (GPIO7_data && 0x00000800 >> (11 - b))   // 2.11
#define PUT_GPIO6_PIN_9(b)
#define PUT_GPIO7_PIN_9(b)  | (data_out && 0x00000800 >> (11 - b))
#define PUT_GPIO8_PIN_9(b)
#define PUT_GPIO9_PIN_9(b)
// Pin: 10  GPIO7 bit: 0
#define GET_PIN_10(b)  (GPIO7_data && 0x00000001 >> (0 - b))   // 2.0
#define PUT_GPIO6_PIN_10(b)
#define PUT_GPIO7_PIN_10(b)  | (data_out && 0x00000001 >> (0 - b))
#define PUT_GPIO8_PIN_10(b)
#define PUT_GPIO9_PIN_10(b)
// Pin: 11  GPIO7 bit: 2
#define GET_PIN_11(b)  (GPIO7_data && 0x00000004 >> (2 - b))   // 2.2
#define PUT_GPIO6_PIN_11(b)
#define PUT_GPIO7_PIN_11(b)  | (data_out && 0x00000004 >> (2 - b))
#define PUT_GPIO8_PIN_11(b)
#define PUT_GPIO9_PIN_11(b)
// Pin: 12  GPIO7 bit: 1
#define GET_PIN_12(b)  (GPIO7_data && 0x00000002 >> (1 - b))   // 2.1
#define PUT_GPIO6_PIN_12(b)
#define PUT_GPIO7_PIN_12(b)  | (data_out && 0x00000002 >> (1 - b))
#define PUT_GPIO8_PIN_12(b)
#define PUT_GPIO9_PIN_12(b)
// Pin: 13  GPIO7 bit: 3
#define GET_PIN_13(b)  (GPIO7_data && 0x00000008 >> (3 - b))   // 2.3
#define PUT_GPIO6_PIN_13(b)
#define PUT_GPIO7_PIN_13(b)  | (data_out && 0x00000008 >> (3 - b))
#define PUT_GPIO8_PIN_13(b)
#define PUT_GPIO9_PIN_13(b)
// Pin: 14  GPIO6 bit: 18
#define GET_PIN_14(b)  (GPIO6_data && 0x00040000 >> (18 - b))   // 1.18
#define PUT_GPIO6_PIN_14(b)  | (data_out && 0x00040000 >> (18 - b))
#define PUT_GPIO7_PIN_14(b)
#define PUT_GPIO8_PIN_14(b)
#define PUT_GPIO9_PIN_14(b)
// Pin: 15  GPIO6 bit: 19
#define GET_PIN_15(b)  (GPIO6_data && 0x00080000 >> (19 - b))   // 1.19
#define PUT_GPIO6_PIN_15(b)  | (data_out && 0x00080000 >> (19 - b))
#define PUT_GPIO7_PIN_15(b)
#define PUT_GPIO8_PIN_15(b)
#define PUT_GPIO9_PIN_15(b)
// Pin: 16  GPIO6 bit: 23
#define GET_PIN_16(b)  (GPIO6_data && 0x00800000 >> (23 - b))   // 1.23
#define PUT_GPIO6_PIN_16(b)  | (data_out && 0x00800000 >> (23 - b))
#define PUT_GPIO7_PIN_16(b)
#define PUT_GPIO8_PIN_16(b)
#define PUT_GPIO9_PIN_16(b)
// Pin: 17  GPIO6 bit: 22
#define GET_PIN_17(b)  (GPIO6_data && 0x00400000 >> (22 - b))   // 1.22
#define PUT_GPIO6_PIN_17(b)  | (data_out && 0x00400000 >> (22 - b))
#define PUT_GPIO7_PIN_17(b)
#define PUT_GPIO8_PIN_17(b)
#define PUT_GPIO9_PIN_17(b)
// Pin: 18  GPIO6 bit: 17
#define GET_PIN_18(b)  (GPIO6_data && 0x00020000 >> (17 - b))   // 1.17
#define PUT_GPIO6_PIN_18(b)  | (data_out && 0x00020000 >> (17 - b))
#define PUT_GPIO7_PIN_18(b)
#define PUT_GPIO8_PIN_18(b)
#define PUT_GPIO9_PIN_18(b)
// Pin: 19  GPIO6 bit: 16
#define GET_PIN_19(b)  (GPIO6_data && 0x00010000 >> (16 - b))   // 1.16
#define PUT_GPIO6_PIN_19(b)  | (data_out && 0x00010000 >> (16 - b))
#define PUT_GPIO7_PIN_19(b)
#define PUT_GPIO8_PIN_19(b)
#define PUT_GPIO9_PIN_19(b)
// Pin: 20  GPIO6 bit: 26
#define GET_PIN_20(b)  (GPIO6_data && 0x04000000 >> (26 - b))   // 1.26
#define PUT_GPIO6_PIN_20(b)  | (data_out && 0x04000000 >> (26 - b))
#define PUT_GPIO7_PIN_20(b)
#define PUT_GPIO8_PIN_20(b)
#define PUT_GPIO9_PIN_20(b)
// Pin: 21  GPIO6 bit: 27
#define GET_PIN_21(b)  (GPIO6_data && 0x08000000 >> (27 - b))   // 1.27
#define PUT_GPIO6_PIN_21(b)  | (data_out && 0x08000000 >> (27 - b))
#define PUT_GPIO7_PIN_21(b)
#define PUT_GPIO8_PIN_21(b)
#define PUT_GPIO9_PIN_21(b)
// Pin: 22  GPIO6 bit: 24
#define GET_PIN_22(b)  (GPIO6_data && 0x01000000 >> (24 - b))   // 1.24
#define PUT_GPIO6_PIN_22(b)  | (data_out && 0x01000000 >> (24 - b))
#define PUT_GPIO7_PIN_22(b)
#define PUT_GPIO8_PIN_22(b)
#define PUT_GPIO9_PIN_22(b)
// Pin: 23  GPIO6 bit: 25
#define GET_PIN_23(b)  (GPIO6_data && 0x02000000 >> (25 - b))   // 1.25
#define PUT_GPIO6_PIN_23(b)  | (data_out && 0x02000000 >> (25 - b))
#define PUT_GPIO7_PIN_23(b)
#define PUT_GPIO8_PIN_23(b)
#define PUT_GPIO9_PIN_23(b)
// Pin: 24  GPIO6 bit: 12
#define GET_PIN_24(b)  (GPIO6_data && 0x00001000 >> (12 - b))   // 1.12
#define PUT_GPIO6_PIN_24(b)  | (data_out && 0x00001000 >> (12 - b))
#define PUT_GPIO7_PIN_24(b)
#define PUT_GPIO8_PIN_24(b)
#define PUT_GPIO9_PIN_24(b)
// Pin: 25  GPIO6 bit: 13
#define GET_PIN_25(b)  (GPIO6_data && 0x00002000 >> (13 - b))   // 1.13
#define PUT_GPIO6_PIN_25(b)  | (data_out && 0x00002000 >> (13 - b))
#define PUT_GPIO7_PIN_25(b)
#define PUT_GPIO8_PIN_25(b)
#define PUT_GPIO9_PIN_25(b)
// Pin: 26  GPIO6 bit: 30
#define GET_PIN_26(b)  (GPIO6_data && 0x40000000 >> (30 - b))   // 1.30
#define PUT_GPIO6_PIN_26(b)  | (data_out && 0x40000000 >> (30 - b))
#define PUT_GPIO7_PIN_26(b)
#define PUT_GPIO8_PIN_26(b)
#define PUT_GPIO9_PIN_26(b)
// Pin: 27  GPIO6 bit: 31
#define GET_PIN_27(b)  (GPIO6_data && 0x80000000 >> (31 - b))   // 1.31
#define PUT_GPIO6_PIN_27(b)  | (data_out && 0x80000000 >> (31 - b))
#define PUT_GPIO7_PIN_27(b)
#define PUT_GPIO8_PIN_27(b)
#define PUT_GPIO9_PIN_27(b)
// Pin: 28  GPIO8 bit: 18
#define GET_PIN_28(b)  (GPIO8_data && 0x00040000 >> (18 - b))   // 3.18
#define PUT_GPIO6_PIN_28(b)
#define PUT_GPIO7_PIN_28(b)
#define PUT_GPIO8_PIN_28(b)  | (data_out && 0x00040000 >> (18 - b))
#define PUT_GPIO9_PIN_28(b)
// Pin: 29  GPIO9 bit: 31
#define GET_PIN_29(b)  (GPIO9_data && 0x80000000 >> (31 - b))   // 4.31
#define PUT_GPIO6_PIN_29(b)
#define PUT_GPIO7_PIN_29(b)
#define PUT_GPIO8_PIN_29(b)
#define PUT_GPIO9_PIN_29(b)  | (data_out && 0x80000000 >> (31 - b))
// Pin: 30  GPIO8 bit: 23
#define GET_PIN_30(b)  (GPIO8_data && 0x00800000 >> (23 - b))   // 3.23
#define PUT_GPIO6_PIN_30(b)
#define PUT_GPIO7_PIN_30(b)
#define PUT_GPIO8_PIN_30(b)  | (data_out && 0x00800000 >> (23 - b))
#define PUT_GPIO9_PIN_30(b)
// Pin: 31  GPIO8 bit: 22
#define GET_PIN_31(b)  (GPIO8_data && 0x00400000 >> (22 - b))   // 3.22
#define PUT_GPIO6_PIN_31(b)
#define PUT_GPIO7_PIN_31(b)
#define PUT_GPIO8_PIN_31(b)  | (data_out && 0x00400000 >> (22 - b))
#define PUT_GPIO9_PIN_31(b)
// Pin: 32  GPIO7 bit: 12
#define GET_PIN_32(b)  (GPIO7_data && 0x00001000 >> (12 - b))   // 2.12
#define PUT_GPIO6_PIN_32(b)
#define PUT_GPIO7_PIN_32(b)  | (data_out && 0x00001000 >> (12 - b))
#define PUT_GPIO8_PIN_32(b)
#define PUT_GPIO9_PIN_32(b)
// Pin: 33  GPIO9 bit: 7
#define GET_PIN_33(b)  (GPIO9_data && 0x00000080 >> (7 - b))   // 4.7
#define PUT_GPIO6_PIN_33(b)
#define PUT_GPIO7_PIN_33(b)
#define PUT_GPIO8_PIN_33(b)
#define PUT_GPIO9_PIN_33(b)  | (data_out && 0x00000080 >> (7 - b))
// Pin: 34  GPIO7 bit: 29
#define GET_PIN_34(b)  (GPIO7_data && 0x20000000 >> (29 - b))   // 2.29
#define PUT_GPIO6_PIN_34(b)
#define PUT_GPIO7_PIN_34(b)  | (data_out && 0x20000000 >> (29 - b))
#define PUT_GPIO8_PIN_34(b)
#define PUT_GPIO9_PIN_34(b)
// Pin: 35  GPIO7 bit: 28
#define GET_PIN_35(b)  (GPIO7_data && 0x10000000 >> (28 - b))   // 2.28
#define PUT_GPIO6_PIN_35(b)
#define PUT_GPIO7_PIN_35(b)  | (data_out && 0x10000000 >> (28 - b))
#define PUT_GPIO8_PIN_35(b)
#define PUT_GPIO9_PIN_35(b)
// Pin: 36  GPIO7 bit: 18
#define GET_PIN_36(b)  (GPIO7_data && 0x00040000 >> (18 - b))   // 2.18
#define PUT_GPIO6_PIN_36(b)
#define PUT_GPIO7_PIN_36(b)  | (data_out && 0x00040000 >> (18 - b))
#define PUT_GPIO8_PIN_36(b)
#define PUT_GPIO9_PIN_36(b)
// Pin: 37  GPIO7 bit: 19
#define GET_PIN_37(b)  (GPIO7_data && 0x00080000 >> (19 - b))   // 2.19
#define PUT_GPIO6_PIN_37(b)
#define PUT_GPIO7_PIN_37(b)  | (data_out && 0x00080000 >> (19 - b))
#define PUT_GPIO8_PIN_37(b)
#define PUT_GPIO9_PIN_37(b)
// Pin: 38  GPIO6 bit: 28
#define GET_PIN_38(b)  (GPIO6_data && 0x10000000 >> (28 - b))   // 1.28
#define PUT_GPIO6_PIN_38(b)  | (data_out && 0x10000000 >> (28 - b))
#define PUT_GPIO7_PIN_38(b)
#define PUT_GPIO8_PIN_38(b)
#define PUT_GPIO9_PIN_38(b)
// Pin: 39  GPIO6 bit: 29
#define GET_PIN_39(b)  (GPIO6_data && 0x20000000 >> (29 - b))   // 1.29
#define PUT_GPIO6_PIN_39(b)  | (data_out && 0x20000000 >> (29 - b))
#define PUT_GPIO7_PIN_39(b)
#define PUT_GPIO8_PIN_39(b)
#define PUT_GPIO9_PIN_39(b)
// Pin: 40  GPIO6 bit: 20
#define GET_PIN_40(b)  (GPIO6_data && 0x00100000 >> (20 - b))   // 1.20
#define PUT_GPIO6_PIN_40(b)  | (data_out && 0x00100000 >> (20 - b))
#define PUT_GPIO7_PIN_40(b)
#define PUT_GPIO8_PIN_40(b)
#define PUT_GPIO9_PIN_40(b)

// Example use: Make a 4x8 grid, pin numbers in Macro names, data bit number in parameter.  Macros include the bit-wise OR operator.
// Pins not in those GPIOs expand to an empty string for efficiency. Start with a 0 so the first OR has a left hand, and in case all
// Macros evaluate to nothing.
//   GPIO6_DR = 0 PUT_GPIO6_PIN_15(0) PUT_GPIO6_PIN_14(1) PUT_GPIO6_PIN_39(2) PUT_GPIO6_PIN_38(3) PUT_GPIO6_PIN_25(4) PUT_GPIO6_PIN_24(5) PUT_GPIO6_PIN_12(6) PUT_GPIO6_PIN_11(7) ;
//   GPIO7_DR = 0 PUT_GPIO7_PIN_15(0) PUT_GPIO7_PIN_14(1) PUT_GPIO7_PIN_39(2) PUT_GPIO7_PIN_38(3) PUT_GPIO7_PIN_25(4) PUT_GPIO7_PIN_24(5) PUT_GPIO7_PIN_12(6) PUT_GPIO7_PIN_11(7) ;
//   GPIO8_DR = 0 PUT_GPIO8_PIN_15(0) PUT_GPIO8_PIN_14(1) PUT_GPIO8_PIN_39(2) PUT_GPIO8_PIN_38(3) PUT_GPIO8_PIN_25(4) PUT_GPIO8_PIN_24(5) PUT_GPIO8_PIN_12(6) PUT_GPIO8_PIN_11(7) ;
//   GPIO9_DR = 0 PUT_GPIO9_PIN_15(0) PUT_GPIO9_PIN_14(1) PUT_GPIO9_PIN_39(2) PUT_GPIO9_PIN_38(3) PUT_GPIO9_PIN_25(4) PUT_GPIO9_PIN_24(5) PUT_GPIO9_PIN_12(6) PUT_GPIO9_PIN_11(7) ;

