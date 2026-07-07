#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Square of %d = %d\n", a, a * a);
    printf("Square of %d = %d\n", b, b * b);

    printf("Sum of squares = %d\n", (a * a) + (b * b));

    return 0;
}
