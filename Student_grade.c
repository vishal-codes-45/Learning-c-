#include <stdio.h>

int main() {
    float marks[5], total = 0, percentage;
    int i;

    printf("===== STUDENT GRADE CALCULATOR =====\n");

    for (i = 0; i < 5; i++) {
        printf("Enter marks of Subject %d: ", i + 1);
        scanf("%f", &marks[i]);

        total += marks[i];
    }

    percentage = total / 5;

    printf("\n===== RESULT =====\n");
    printf("Total Marks: %.2f / 500\n", total);
    printf("Percentage : %.2f%%\n", percentage);

    if (percentage >= 90)
        printf("Grade: A+\n");
    else if (percentage >= 80)
        printf("Grade: A\n");
    else if (percentage >= 70)
        printf("Grade: B\n");
    else if (percentage >= 60)
        printf("Grade: C\n");
    else if (percentage >= 50)
        printf("Grade: D\n");
    else
        printf("Grade: F\n");

    return 0;
}
