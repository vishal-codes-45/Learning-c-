#include <stdio.h>

int main() {
    int answer, score = 0;

    printf("===== C MINI QUIZ =====\n\n");

    printf("1. C language ke creator kaun hain?\n");
    printf("1) James Gosling\n2) Dennis Ritchie\n3) Bjarne Stroustrup\n4) Guido van Rossum\n");
    printf("Answer: ");
    scanf("%d", &answer);

    if (answer == 2) {
        printf("Correct! ✅\n");
        score++;
    } else {
        printf("Wrong! ❌\n");
    }

    printf("\n2. C mein integer ke liye kaunsa data type use hota hai?\n");
    printf("1) float\n2) char\n3) int\n4) double\n");
    printf("Answer: ");
    scanf("%d", &answer);

    if (answer == 3) {
        printf("Correct! ✅\n");
        score++;
    } else {
        printf("Wrong! ❌\n");
    }

    printf("\n3. 10 %% 3 ka result kya hoga?\n");
    printf("1) 1\n2) 2\n3) 3\n4) 0\n");
    printf("Answer: ");
    scanf("%d", &answer);

    if (answer == 1) {
        printf("Correct! ✅\n");
        score++;
    } else {
        printf("Wrong! ❌\n");
    }

    printf("\n===== RESULT =====\n");
    printf("Your Score: %d/3\n", score);

    if (score == 3)
        printf("Excellent! 🔥\n");
    else if (score == 2)
        printf("Good Job! 👍\n");
    else
        printf("Keep Practicing! 💪\n");

    return 0;
}
