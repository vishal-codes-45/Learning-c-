#include <stdio.h>

int main() {
    int marks[5];
    int sum = 0;
    float average;

    printf("Enter marks of 5 subjects:\n");

    for (int i = 0; i < 5; i++) {
        scanf("%d", &marks[i]);
        sum += marks[i];
    }

    average = sum / 5.0;

    printf("Total Marks = %d\n", sum);
    printf("Average = %.2f\n", average);

    return 0;
}
