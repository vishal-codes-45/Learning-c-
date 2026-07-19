#include <stdio.h>

int main()
{
    int n, fact = 1, i = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(i <= n)
    {
        fact = fact * i;
        i++;
    }

    printf("Factorial = %d", fact);

    return 0;
}
