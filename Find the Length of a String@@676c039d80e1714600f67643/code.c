#include <stdio.h>

int main() {
    char str[1000]; // Assuming a maximum string length of 1000
    scanf("%s", str);

    int length = 0;
    while (str[length] != '\0') {
        length++;
    }

    printf("%d\n", length);

    return 0;
}