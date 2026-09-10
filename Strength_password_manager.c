#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char password[100];
    int upper = 0, lower = 0, digit = 0, special = 0;

    printf("Enter your password: ");
    scanf("%99s", password);

    for (int i = 0; password[i] != '\0'; i++) {
        if (isupper(password[i]))
            upper = 1;
        else if (islower(password[i]))
            lower = 1;
        else if (isdigit(password[i]))
            digit = 1;
        else
            special = 1;
    }

    int score = upper + lower + digit + special;

    printf("\nPassword Analysis:\n");

    if (strlen(password) < 6)
        printf("Length: Too Short\n");
    else if (strlen(password) < 10)
        printf("Length: Medium\n");
    else
        printf("Length: Strong\n");

    printf("Uppercase: %s\n", upper ? "Yes" : "No");
    printf("Lowercase: %s\n", lower ? "Yes" : "No");
    printf("Number: %s\n", digit ? "Yes" : "No");
    printf("Special Character: %s\n", special ? "Yes" : "No");

    if (strlen(password) >= 10 && score == 4)
        printf("\nStrength: VERY STRONG 🔥\n");
    else if (strlen(password) >= 8 && score >= 3)
        printf("\nStrength: STRONG 💪\n");
    else if (strlen(password) >= 6 && score >= 2)
        printf("\nStrength: MEDIUM 👍\n");
    else
        printf("\nStrength: WEAK ⚠️\n");

    return 0;
}
