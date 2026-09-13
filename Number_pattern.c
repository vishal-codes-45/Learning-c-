#include <stdio.h>

int main() {
    int n, temp, digit;
    int even = 0, odd = 0, sum = 0;
    int largest = 0, smallest = 9;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    while (temp > 0) {
        digit = temp % 10;

        sum += digit;

        if (digit % 2 == 0)
            even++;
        else
            odd++;

        if (digit > largest)
            largest = digit;

        if (digit < smallest)
            smallest = digit;

        temp /= 10;
    }

    printf("\n--- Number Analysis ---\n");
    printf("Digit Sum      : %d\n", sum);
    printf("Even Digits    : %d\n", even);
    printf("Odd Digits     : %d\n", odd);
    printf("Largest Digit  : %d\n", largest);
    printf("Smallest Digit : %d\n", smallest);

    return 0;
}
