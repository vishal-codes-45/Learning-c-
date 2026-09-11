#include <stdio.h>

int main() {
    int n, temp, digit;
    int count = 0, even = 0, odd = 0;
    int sum = 0, largest = 0, smallest = 9;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    while (temp > 0) {
        digit = temp % 10;

        count++;
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
    printf("Total digits : %d\n", count);
    printf("Even digits  : %d\n", even);
    printf("Odd digits   : %d\n", odd);
    printf("Digit sum    : %d\n", sum);
    printf("Largest digit: %d\n", largest);
    printf("Smallest digit: %d\n", smallest);

    return 0;
}
