#include <stdio.h>

int main() {
    int secret = 7;
    int guess;

    printf("Guess the number (1-10): ");
    scanf("%d", &guess);

    if (guess == secret) {
        printf("🎉 Correct! You guessed it.\n");
    } 
    else if (guess < secret) {
        printf("Too low! Try a bigger number.\n");
    } 
    else {
        printf("Too high! Try a smaller number.\n");
    }

    return 0;
}
