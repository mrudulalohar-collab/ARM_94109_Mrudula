#include <stdio.h>
#include <stdint.h>

int main() {
    uint8_t reg = 0xAA;  
    
    printf("Original register: 0x%X\n", reg);


    uint8_t read_bits = (reg >> 2) & 0x07;
    printf("Bits 2 to 4 value: 0b%03b\n", read_bits);
    
    reg = reg & ~(0x07 << 2);     
    reg = reg | (0x03 << 2);       

    printf("Modified register: 0x%X\n", reg);

    return 0;
}
