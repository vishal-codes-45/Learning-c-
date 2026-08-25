#include <stdio.h>
#include <string.h>

#define MAX 100

struct Expense {
    char name[50];
    char category[30];
    float amount;
};

int main() {
    struct Expense expenses[MAX];
    int count = 0;
    int choice;
    float total;

    while (1) {
        printf("\n===== EXPENSE TRACKER =====\n");
        printf("1. Add Expense\n");
        printf("2. Show Expenses\n");
        printf("3. Total Expense\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            if (count >= MAX) {
                printf("Expense limit reached!\n");
                continue;
            }

            printf("Enter expense name: ");
            scanf(" %[^\n]", expenses[count].name);

            printf("Enter category: ");
            scanf(" %[^\n]", expenses[count].category);

            printf("Enter amount: ");
            scanf("%f", &expenses[count].amount);

            count++;
            printf("Expense added successfully!\n");
        }

        else if (choice == 2) {
            if (count == 0) {
                printf("No expenses found.\n");
                continue;
            }

            printf("\n--- All Expenses ---\n");

            for (int i = 0; i < count; i++) {
                printf("%d. %s | %s | Rs. %.2f\n",
                       i + 1,
                       expenses[i].name,
                       expenses[i].category,
                       expenses[i].amount);
            }
        }

        else if (choice == 3) {
            total = 0;

            for (int i = 0; i < count; i++) {
                total += expenses[i].amount;
            }

            printf("Total Expense = Rs. %.2f\n", total);
        }

        else if (choice == 4) {
            printf("Thank you for using Expense Tracker!\n");
            break;
        }

        else {
            printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}
