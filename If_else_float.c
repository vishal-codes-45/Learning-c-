#include <stdio.h>

int main() {
    float m1, m2, m3, m4, m5;
    float total, percentage;

    printf("Enter marks of 5 subjects (out of 100):\n");

    printf("Subject 1: ");
    scanf("%f", &m1);

    printf("Subject 2: ");
    scanf("%f", &m2);

    printf("Subject 3: ");
    scanf("%f", &m3);

    printf("Subject 4: ");
    scanf("%f", &m4);

    printf("Subject 5: ");
    scanf("%f", &m5);

    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5;

    printf("\n----- RESULT -----\n");
    printf("Total Marks: %.2f / 500\n", total);
    printf("Percentage: %.2f%%\n", percentage);

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

    if (percentage >= 33)
        printf("Status: PASS\n");
    else
        printf("Status: FAIL\n");

    return 0;
}
