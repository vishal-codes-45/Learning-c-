#include <stdio.h>

int main()
{
    char name[] = "Vishal";
    int age = 17;
    float height = 5.1;

    printf("===== STUDENT PROFILE =====\n");
    printf("Name   : %s\n", name);
    printf("Age    : %d years\n", age);
    printf("Height : %.1f feet\n", height);

    return 0;
}
