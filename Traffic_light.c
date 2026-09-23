#include <stdio.h>

enum Light {
    RED = 1,
    YELLOW,
    GREEN
};

int main() {
    int choice;

    printf("===== TRAFFIC LIGHT SIMULATOR =====\n");
    printf("1. RED\n");
    printf("2. YELLOW\n");
    printf("3. GREEN\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case RED:
            printf("\nRED -> STOP!\n");
            break;

        case YELLOW:
            printf("\nYELLOW -> GET READY!\n");
            break;

        case GREEN:
            printf("\nGREEN -> GO!\n");
            break;

        default:
            printf("\nInvalid choice!\n");
    }

    return 0;
}
