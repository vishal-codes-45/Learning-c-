#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secret, guess;
    int attempts = 7;

    srand(time(NULL));
    secret = rand() % 100 + 1;

    printf("===== NUMBER GUESSING GAME =====\n");
    printf("1 se 100 ke beech number guess karo!\n");
    printf("Tumhare paas %d attempts hain.\n\n", attempts);

    for (int i = 1; i <= attempts; i++) {
        printf("Attempt %d: ", i);
        scanf("%d", &guess);

        if (guess == secret) {
            printf("\n🎉 Correct! Tumne %d attempts me number guess kar liya.\n", i);
            return 0;
        }

        if (guess < secret)
            printf("Thoda bada number try karo.\n\n");
        else
            printf("Thoda chhota number try karo.\n\n");
    }

    printf("😅 Game Over!\n");
    printf("Correct number tha: %d\n", secret);

    return 0;
}
