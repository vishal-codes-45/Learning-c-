#include <stdio.h>

int main() {
    int a = 20, b = 10;

    printf("AND (&&) = %d\n", (a > b && a > 15));
    printf("OR (||) = %d\n", (a < b || a > 15));
    printf("NOT (!) = %d\n", !(a < b));

    return 0;
}
