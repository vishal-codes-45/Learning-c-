#include <stdio.h>

int main()
{
    int n, i = 1;

    printf("Enter number: ");
    scanf("%d", &n);

    while(i <= 10)
    {
        printf("%d x %d = %d\n", n, i, n*i);
        i++;
    }

    return 0;
}
