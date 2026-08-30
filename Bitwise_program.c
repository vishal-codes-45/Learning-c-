#include <stdio.h>

int main() {
    unsigned int n;
    int count = 0;

    printf("Enter a number: ");
    scanf("%u", &n);

    printf("Binary: ");

    if (n == 0) {
        printf("0");
    } else {
        unsigned int temp = n;
        int bits[32];
        int i = 0;

        while (temp > 0) {
            bits[i] = temp & 1;
            if (bits[i] == 1)
                count++;

            temp = temp >> 1;
            i++;
        }

        for (i = i - 1; i >= 0; i--) {
            printf("%d", bits[i]);
        }
    }

    printf("\nSet Bits (1s): %d\n", count);

    return 0;
}
