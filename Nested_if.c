#include <stdio.h>

int main() {
    int age, marks;

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter marks: ");
    scanf("%d", &marks);

    if (age >= 18 && marks >= 60) {
        printf("Eligible");
    } else {
        printf("Not Eligible");
    }

    return 0;
}
