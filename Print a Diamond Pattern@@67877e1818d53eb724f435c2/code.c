#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N); // Reading the number of rows in the top half

    // Print the top half of the diamond
    for(int i = 1; i <= N; i++) {
        // Print spaces
        for(int j = i; j < N; j++) {
            printf(" ");
        }
        // Print stars
        for(int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        printf("\n");
    }

    // Print the bottom half of the diamond
    for(int i = N - 1; i >= 1; i--) {
        // Print spaces
        for(int j = N; j > i; j--) {
            printf(" ");
        }
        // Print stars
        for(int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}