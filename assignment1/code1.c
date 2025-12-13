#include <stdio.h>

int countOnes(int n) {
    int count = 0;
    while (n > 0) {
        if (n & 1)         // check last bit is 1 or not
            count++;
        n = n >> 1;        // shift right
    }
    return count;
    
}

int main() {
    int num;
    printf("Enter number: ");
    scanf("%d", &num);

    printf("Number of 1's bits = %d\n", countOnes(num));

    return 0;
}

