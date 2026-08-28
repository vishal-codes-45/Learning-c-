#include <stdio.h>

int main() {
    int pin, choice;
    float balance = 5000, amount;

    printf("===== ATM SIMULATOR =====\n");
    printf("Enter your PIN: ");
    scanf("%d", &pin);

    if (pin != 1234) {
        printf("Wrong PIN! Access Denied.\n");
        return 0;
    }

    do {
        printf("\n===== MENU =====\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Your Balance: Rs. %.2f\n", balance);
                break;

            case 2:
                printf("Enter amount to
