#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char password[100];
    int i, upper = 0, lower = 0, digit = 0, special = 0;

    printf("Enter your password: ");
    scanf("%99s", password);

    int length = strlen(password);

    for (i = 0; i < length; i++) {
        if (isupper(password[i]))
            upper = 1;
        else if (islower(password[i]))
            lower = 1;
        else if (isdigit(password[i]))
            digit = 1;
        else
            special = 1;
    }

    printf("\nPassword Length: %d\n", length);

    if (length >= 8 && upper && lower && digit && special)
        printf("Strength: STRONG\n");
    else if (length >= 6 && (upper || lower) && digit)
        printf("Strength: MEDIUM\n");
    else
        printf("Strength: WEAK\n");

    return 0;
}
