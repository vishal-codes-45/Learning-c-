#include <stdio.h>

int main() {
    int n, i;
    float expense[20], total = 0;

    printf("How many expenses? ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter expense %d: Rs ", i + 1);
        scanf("%f", &expense[i]);
        total += expense[i];
    }

    printf("\n----- EXPENSE REPORT -----\n");

    for (i = 0; i < n; i++) {
        printf("Expense %d: Rs %.2f\n", i + 1, expense[i]);
    }

    printf("--------------------------\n");
    printf("Total Expense: Rs %.2f\n", total);
    printf("Average Expense: Rs %.2f\n", total / n);

    return 0;
}
