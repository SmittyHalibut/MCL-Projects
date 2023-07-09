#!/usr/bin/python3


print("// Macros for efficient bit manipulation. Magic constants (GPIOx and bit numbers) are from:")
print("// https://github.com/KurtE/TeensyDocuments/blob/master/Teensy4.1%20Pins.pdf")
print("")

num_pins = 41

gpio_str = [ "foo", "GPIO6", "GPIO7", "GPIO8", "GPIO9" ]
gpio_full = [ "foo", "GPIO6_data", "GPIO7_data", "GPIO8_data", "GPIO9_data" ]

gpios = [ 1, 1, 4, 4, 4, 4, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 3, 4, 3, 3, 2, 4, 2, 2, 2, 2, 1, 1, 1, 1 ]
bits =  [ 3, 2, 4, 5, 6, 8, 10, 17, 16, 11, 0, 2, 1, 3, 18, 19, 23, 22, 17, 16, 26, 27, 24, 25, 12, 13, 30, 31, 18, 31, 23, 22, 12, 7, 29, 28, 18, 19, 28, 29, 20, 21]


for pin in range(0, num_pins):
    print(f"// Pin: {pin}  {gpio_str[gpios[pin]]} bit: {bits[pin]}")
    #print(f"#define GET_PIN_{pin}({gpio_str[1]}, {gpio_str[2]}, {gpio_str[3]}, {gpio_str[4]})   ({gpio_str[gpios[pin]]} && {format(1<<bits[pin], '#010x')} >> {format(bits[pin], '>2d')})   // {gpios[pin]}.{bits[pin]}")
    print(f"#define GET_PIN_{pin}(b)  ({gpio_full[gpios[pin]]} && {format(1<<bits[pin], '#010x')} >> ({bits[pin]} - b))   // {gpios[pin]}.{bits[pin]}")
    for g in range(1, 5):
        macro_name = f"PUT_{gpio_str[g]}_PIN_{pin}"
        if g == gpios[pin]:
            print(f"#define {macro_name}(b)  | (data_out && {format(1<<bits[pin], '#010x')} >> ({bits[pin]} - b))")
        else:
            print(f"#define {macro_name}(b)")

print("""
// Example use: Make a 4x8 grid, pin numbers in Macro names, data bit number in parameter.  Macros include the bit-wise OR operator.
// Pins not in those GPIOs expand to an empty string for efficiency. Start with a 0 so the first OR has a left hand, and in case all
// Macros evaluate to nothing.
//   GPIO6_DR = 0 PUT_GPIO6_PIN_15(0) PUT_GPIO6_PIN_14(1) PUT_GPIO6_PIN_39(2) PUT_GPIO6_PIN_38(3) PUT_GPIO6_PIN_25(4) PUT_GPIO6_PIN_24(5) PUT_GPIO6_PIN_12(6) PUT_GPIO6_PIN_11(7) ;
//   GPIO7_DR = 0 PUT_GPIO7_PIN_15(0) PUT_GPIO7_PIN_14(1) PUT_GPIO7_PIN_39(2) PUT_GPIO7_PIN_38(3) PUT_GPIO7_PIN_25(4) PUT_GPIO7_PIN_24(5) PUT_GPIO7_PIN_12(6) PUT_GPIO7_PIN_11(7) ;
//   GPIO8_DR = 0 PUT_GPIO8_PIN_15(0) PUT_GPIO8_PIN_14(1) PUT_GPIO8_PIN_39(2) PUT_GPIO8_PIN_38(3) PUT_GPIO8_PIN_25(4) PUT_GPIO8_PIN_24(5) PUT_GPIO8_PIN_12(6) PUT_GPIO8_PIN_11(7) ;
//   GPIO9_DR = 0 PUT_GPIO9_PIN_15(0) PUT_GPIO9_PIN_14(1) PUT_GPIO9_PIN_39(2) PUT_GPIO9_PIN_38(3) PUT_GPIO9_PIN_25(4) PUT_GPIO9_PIN_24(5) PUT_GPIO9_PIN_12(6) PUT_GPIO9_PIN_11(7) ;
""")