#include <stdio.h>

int main() {
    int i = 1;

    while (i <= 20) {

        if (i == 11) {
            printf("Loop stopped at %d\n", i);
            break;
        }

        printf("%d\n", i);
        i++;
    }

    printf("Program Ended");

    return 0;
}
