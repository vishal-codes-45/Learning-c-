#include <stdio.h>

int main() {
    int a, b, quotient;

    printf("Enter first number\n");
    scanf("%d", &a);

    printf("Enter second number\n");
    scanf("%d", &b);

    quotient = a / b;

    printf("Quotient = %d", quotient);

    return 0;
}
