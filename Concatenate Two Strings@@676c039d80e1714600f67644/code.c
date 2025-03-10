#include <stdio.h>

int main() {
    char str1[1000], str2[1000]; // Assuming maximum string length of 1000 each
    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);

    int len1 = 0;
    while (str1[len1] != '\0' && str1[len1] != '\n') {
        len1++;
    }

    int len2 = 0;
    while (str2[len2] != '\0' && str2[len2] != '\n') {
        len2++;
    }

    for (int i = 0; i < len2; i++) {
        str1[len1 + i] = str2[i];
    }

    str1[len1 + len2] = '\0'; // Null-terminate the concatenated string

    printf("%s", str1);

    return 0;
}