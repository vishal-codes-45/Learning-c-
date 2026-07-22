#include <stdio.h>

int main() {
    int i;

    printf("Numbers from 1 to 20 (Skipping multiples of 3):\n");

    for (i = 1; i <= 20; i++) {
        if (i % 3 == 0) {
            continue;   // Skip multiples of 3
        }

        printf("%d ", i);
    }

    return 0;
}
