#include <stdio.h>

int main() {
    int choice;

    printf("Enter a number (1-4): ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Addition Selected");
            break;

        case 2:
            printf("Subtraction Selected");
            break;

        case 3:
            printf("Multiplication Selected");
            break;

        case 4:
            printf("Division Selected");
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}
