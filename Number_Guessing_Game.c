#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secretNumber, guess, attempts = 0;

    srand(time(0));
    secretNumber = rand() % 100 + 1;

    printf("====================================\n");
    printf("       NUMBER GUESSING GAME 🎮\n");
    printf("====================================\n");
    printf("I have chosen a number between 1 and 100.\n");
    printf("Can you guess it?\n\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        attempts++;

        if (guess > secretNumber) {
            printf("Too High! Try a smaller number.\n\n");
        }
        else if (guess < secretNumber) {
            printf("Too Low! Try a bigger number.\n\n");
        }
        else {
            printf("\n🎉 Congratulations!\n");
            printf("You guessed the number in %d attempts.\n", attempts);
        }

    } while (guess != secretNumber);

    printf("\n====================================\n");
    printf("          GAME COMPLETED 🏆\n");
    printf("====================================\n");

    return 0;
}
