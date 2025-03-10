#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[1000]; // Assuming a maximum string length of 1000
    fgets(str, sizeof(str), stdin); // Read the entire line, including spaces

    int count = 0;
    int length = strlen(str);
    int inWord = 0; // Flag to track if we're currently inside a word

    for (int i = 0; i < length; i++) {
        if (isspace(str[i])) {
            inWord = 0; // Not in a word anymore
        } else if (!inWord) {
            count++; // Start of a new word
            inWord = 1; // Now we're in a word
        }
    }

    printf("%d\n", count);

    return 0;
}