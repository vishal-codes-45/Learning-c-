#include <stdio.h>

int main() {
    int pin, choice;
    float balance = 5000.0, amount;

    printf("===== MINI ATM =====\n");

    printf("Enter PIN: ");
    scanf("%d", &pin);

    if (pin != 1234) {
        printf("Wrong PIN!\n");
        return 0;
    }

    while (1) {
        printf("\n--- MENU ---\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");

        printf("Choose: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Balance: Rs. %.2f\n", balance);
                break;

            case 2:
                printf("Enter deposit amount: ");
                scanf("%f", &amount);

                if (amount > 0) {
                    balance += amount;
                    printf("Deposit successful!\n");
                } else {
                    printf("Invalid amount!\n");
                }
                break;

            case 3:
                printf("Enter withdrawal amount: ");
                scanf("%f", &amount);

                if (amount > 0 && amount <= balance) {
                    balance -= amount;
                    printf("Withdrawal successful!\n");
                } else {
                    printf("Insufficient balance or invalid amount!\n");
                }
                break;

            case 4:
                printf("Thank you for using Mini ATM!\n");
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}
