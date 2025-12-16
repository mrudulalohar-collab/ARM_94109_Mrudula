#include <stdio.h>
#include <stdint.h>

int main() {
    uint8_t value = 5;   // Binary: 0000 0101

    uint8_t left_shift = value << 2;   // Left shift by 2
    uint8_t right_shift = value >> 1;  // Right shift by 1

    printf("Original value: %d\n", value);
    printf("After left shift by 2: %d\n", left_shift);
    printf("After right shift by 1: %d\n", right_shift);

    return 0;
}
