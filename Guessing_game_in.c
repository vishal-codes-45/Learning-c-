#include <stdio.h>

int main() {
    int secret = 37;
    int guess;
    int attempts = 0;

    printf("=== Number Guessing Game ===\n");
    printf("1 se 100 ke beech number guess karo!\n");

    do {
        printf("Apna guess enter karo: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > secret) {
            printf("Too high! Thoda chhota number try karo.\n");
        }
        else if (guess < secret) {
            printf("Too low! Thoda bada number try karo.\n");
        }
        else {
            printf("🎉 Correct! Tumne %d attempts me guess kiya.\n", attempts);
        }

    } while (guess != secret);

    return 0;
}
