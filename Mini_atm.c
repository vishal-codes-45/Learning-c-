#include <stdio.h>

int main() {
    int pin, choice;
    float balance = 5000.0, amount;

    printf("===== WELCOME TO MINI ATM =====\n");

    printf("Enter your PIN: ");
    scanf("%d", &pin);

    if (pin != 1234) {
        printf("Wrong PIN! Access Denied.\n");
        return 0;
    }

    do {
        printf("\n===== ATM MENU =====\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("Current Balance: Rs. %.2f\n", balance);
                break;

            case 2:
                printf("Enter deposit amount: Rs. ");
                scanf("%f", &amount);

                if (amount > 0) {
                    balance += amount;
                    printf("Money Deposited Successfully!\n");
                } else {
                    printf("Invalid Amount!\n");
                }
                break;

            case 3:
                printf("Enter withdrawal amount: Rs. ");
                scanf("%f", &amount);

                if (amount <= 0) {
                    printf("Invalid Amount!\n");
                } else if (amount > balance) {
                    printf("Insufficient Balance!\n");
                } else {
                    balance -= amount;
                    printf("Please Collect Your Cash.\n");
                }
                break;

            case 4:
                printf("Thank You for Using Mini ATM!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while (choice != 4);

    return 0;
}
