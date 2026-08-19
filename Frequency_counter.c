#include <stdio.h>

int main() {
    int n, digit, temp;
    int count[10] = {0};

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    while (temp != 0) {
        digit = temp % 10;
        count[digit]++;
        temp /= 10;
    }

    printf("\nDigit Frequency:\n");

    for (int i = 0; i < 10; i++) {
        if (count[i] > 0) {
            printf("%d -> %d times\n", i, count[i]);
        }
    }

    return 0;
}
