#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[1000]; // Assuming a maximum string length of 1000
    scanf("%s", str);

    int length = strlen(str);
    int isPalindrome = 1; // Assume it's a palindrome initially

    for (int i = 0; i < length / 2; i++) {
        if (tolower(str[i]) != tolower(str[length - 1 - i])) {
            isPalindrome = 0; // Not a palindrome
            break;
        }
    }

    if (isPalindrome) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}