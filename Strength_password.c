#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char password[100];
    int upper = 0, lower = 0, digit = 0, special = 0;
    int score = 0;

    printf("Enter password: ");
    scanf("%99s", password);

    int length = strlen(password);

    for (int i = 0; i < length; i++) {
        if (isupper(password[i]))
            upper = 1;
        else if (islower(password[i]))
            lower = 1;
        else if (isdigit(password[i]))
            digit = 1;
        else
            special = 1;
    }

    if (length >= 8) score += 1;
    if (length >= 12) score += 1;
    if (upper) score += 1;
    if (lower) score += 1;
    if (digit) score += 1;
    if (special) score += 1;

    printf("\n--- Password Analysis ---\n");
    printf("Length: %d\n", length);

    if (score <= 2)
        printf("Strength: Weak\n");
    else if (score <= 4)
        printf("Strength: Medium\n");
    else
        printf("Strength: Strong\n");

    printf("Score: %d/6\n", score);

    return 0;
}
