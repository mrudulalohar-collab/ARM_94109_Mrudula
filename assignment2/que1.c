#include <stdio.h>
#include <stdint.h>

void printBinary(uint8_t value)
{
    for (int i = 7; i >= 0; i--)
    {
        printf("%d", (value >> i) & 1);
    }
}

int main()
{
    uint8_t reg = 0x2A;  

    
    reg = reg | (1 << 4);
    printf("After setting bit 4:\n");
    printf("Hex = 0x%02X, Binary = ", reg);
    printBinary(reg);
    printf("\n\n");

    
    reg = reg & ~(1 << 1);
    printf("After clearing bit 1:\n");
    printf("Hex = 0x%02X, Binary = ", reg);
    printBinary(reg);
    printf("\n\n");

    
    reg = reg ^ (1 << 5);
    printf("After toggling bit 5:\n");
    printf("Hex = 0x%02X, Binary = ", reg);
    printBinary(reg);
    printf("\n");

    return 0;
}
