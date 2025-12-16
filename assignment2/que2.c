#include <stdio.h>
#include <stdint.h>

int main()
{
    uint8_t status = 0x08;   // 0000 1000

    // Check bit 3 using bitwise AND
    if (status & (1 << 3))
    {
        printf("\n Bit 3 is set");
    }
    else
    {
        printf("\n Bit 3 is clear");
    }

    return 0;
}
