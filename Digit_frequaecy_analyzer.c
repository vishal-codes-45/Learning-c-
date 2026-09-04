#include <stdio.h>

int main() {
    long long n;
    int digit, count[10] = {0};

    printf("Enter a number: ");
    scanf("%lld", &n);

    if (n == 0) {
        count[0] = 1;
    }

    if (n < 0)
        n = -n;

    while (n > 0) {
        digit = n % 10;
        count[digit]++;
        n /= 10;
    }

    printf("\nDigit Frequency:\n");

    for (int i = 0; i < 10; i++) {
        if (count[i] > 0)
            printf("%d -> %d times\n", i, count[i]);
    }

    return 0;
}
