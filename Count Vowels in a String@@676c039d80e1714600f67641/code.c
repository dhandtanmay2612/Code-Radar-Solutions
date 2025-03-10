#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[1000]; // Assuming a maximum string length of 1000
    scanf("%s", str);

    int count = 0;
    int length = strlen(str);

    for (int i = 0; i < length; i++) {
        char ch = tolower(str[i]); // Convert to lowercase for case-insensitive counting
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}