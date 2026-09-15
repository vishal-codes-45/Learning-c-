#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int user, computer;
    int userScore = 0, computerScore = 0;

    srand(time(0));

    printf("===== ROCK PAPER SCISSORS =====\n");
    printf("1. Rock\n");
    printf("2. Paper\n");
    printf("3. Scissors\n");

    for (int round = 1; round <= 5; round++) {
        printf("\nRound %d\n", round);
        printf("Enter your choice: ");
        scanf("%d", &user);

        if (user < 1 || user > 3) {
            printf("Invalid choice!\n");
            round--;
            continue;
        }

        computer = rand() % 3 + 1;

        printf("Computer chose: %d\n", computer);

        if (user == computer) {
            printf("Draw!\n");
        }
        else if ((user == 1 && computer == 3) ||
                 (user == 2 && computer == 1) ||
                 (user == 3 && computer == 2)) {
            printf("You Win! 🎉\n");
            userScore++;
        }
        else {
            printf("Computer Wins!\n");
            computerScore++;
        }
    }

    printf("\n===== FINAL SCORE =====\n");
    printf("Your Score      : %d\n", userScore);
    printf("Computer Score  : %d\n", computerScore);

    if (userScore > computerScore)
        printf("🏆 You are the Champion!\n");
    else if (userScore < computerScore)
        printf("Computer wins the game!\n");
    else
        printf("Match Draw!\n");

    return 0;
}
