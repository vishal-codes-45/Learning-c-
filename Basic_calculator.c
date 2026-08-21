#include <stdio.h>

int main() {
    float marks, total = 0, average;
    int subjects;

    printf("Enter number of subjects: ");
    scanf("%d", &subjects);

    for (int i = 1; i <= subjects; i++) {
        printf("Enter marks for subject %d: ", i);
        scanf("%f", &marks);

        total += marks;
    }

    average = total / subjects;

    printf("\nTotal Marks = %.2f\n", total);
    printf("Average = %.2f\n", average);

    if (average >= 90)
        printf("Grade: A+\n");
    else if (average >= 80)
        printf("Grade: A\n");
    else if (average >= 70)
        printf("Grade: B\n");
    else if (average >= 60)
        printf("Grade: C\n");
    else if (average >= 50)
        printf("Grade: D\n");
    else
        printf("Grade: F\n");

    return 0;
}
