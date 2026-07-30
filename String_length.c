#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        i++;
    }

    printf("Length of string = %d\n", i - 1); // '\n' को छोड़ने के लिए

    return 0;
}
