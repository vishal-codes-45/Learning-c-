#include <stdio.h>

int main() {
    int pin, choice;
    float balance = 5000.0, amount;

    printf("================================\n");
    printf("       MINI ATM SIMULATOR\n");
    printf("================================\n");

    printf("Enter your PIN: ");
    scanf("%d", &pin);

    if (pin != 1234) {
        printf("\n❌ Incorrect PIN!\n");
        return 0;
    }

    printf("\n✅ Login Successful!\n");

    do {
        printf("\n----------- ATM MENU -----------\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("--------------------------------\n");

        printf("Choose an option: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("\n💰 Current Balance: ₹%.2f\n", balance);
                break;

            case 2:
                printf("\nEnter deposit amount: ₹");
                scanf("%f", &amount);

                if (amount > 0) {
                    balance += amount;
                    printf("✅ ₹%.2f deposited successfully!\n", amount);
                } else {
                    printf("❌ Invalid amount!\n");
                }
                break;

            case 3:
                printf("\nEnter withdrawal amount: ₹");
                scanf("%f", &amount);

                if (amount <= 0) {
                    printf("❌ Invalid amount!\n");
                } else if (amount > balance) {
                    printf("❌ Insufficient balance!\n");
                } else {
                    balance -= amount;
                    printf("✅ Please collect your cash.\n");
                    printf("💰 Remaining Balance: ₹%.2f\n", balance);
                }
                break;

            case 4:
                printf("\nThank you for using Mini ATM! 👋\n");
                break;

            default:
                printf("\n❌ Invalid choice!\n");
        }

    } while (choice != 4);

    return 0;
}
