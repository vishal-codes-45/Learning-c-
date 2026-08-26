#include <stdio.h>

int main() {
    float hindi, english, maths, physics, chemistry;
    float total, percentage;

    printf("===== STUDENT RESULT ANALYZER =====\n\n");

    printf("Hindi marks: ");
    scanf("%f", &hindi);

    printf("English marks: ");
    scanf("%f", &english);

    printf("Maths marks: ");
    scanf("%f", &maths);

    printf("Physics marks: ");
    scanf("%f", &physics);

    printf("Chemistry marks: ");
    scanf("%f", &chemistry);

    total = hindi + english + maths + physics + chemistry;
    percentage = total / 5;

    printf("\n===== RESULT =====\n");
    printf("Total Marks = %.2f / 500\n", total);
    printf("Percentage  = %.2f%%\n", percentage);

    if (percentage >= 90)
        printf("Grade = A+\n");
    else if (percentage >= 80)
        printf("Grade = A\n");
    else if (percentage >= 70)
        printf("Grade = B\n");
    else if (percentage >= 60)
        printf("Grade = C\n");
    else if (percentage >= 50)
        printf("Grade = D\n");
    else
        printf("Grade = F\n");

    return 0;
}
