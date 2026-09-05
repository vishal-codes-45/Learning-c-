#include <stdio.h>

int main() {
    long long num;
    int digit, count[10] = {0};

    printf("Enter a number: ");
    scanf("%lld", &num);

    if (num == 0) {
        count[0] = 1;
    } else {
        while (num != 0) {
            digit = num % 10;
            count[digit]++;
            num /= 10;
        }
    }

    printf("\nDigit Frequency:\n");

    for (int i = 0; i < 10; i++) {
        if (count[i] > 0) {
            printf("%d -> %d times\n", i, count[i]);
        }
    }

    return 0;
}
