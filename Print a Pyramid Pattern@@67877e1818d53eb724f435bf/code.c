#include <stdio.h>

int main() {
    int rows, i, j, space;
    scanf("%d", &rows);

    for (i = 0; i < rows; i++) {
        // Print leading spaces
        for (space = 1; space < rows - i; space++) {
            printf(" ");
        }
        // Print stars
        for (j = 0; j <= 2 * i; j++) {
            printf("*");
            if (j < 2 * i) { // Avoid printing an extra space after the last star
                printf(" ");
            }
        }
        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}

