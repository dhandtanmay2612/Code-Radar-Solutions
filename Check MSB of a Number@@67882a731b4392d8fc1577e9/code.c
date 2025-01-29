#include <stdio.h>
#include <limits.h> // For INT_MAX

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is greater than or equal to 2^31 (which is the value when MSB is set)
    if (num >= (1 << 31)) { 
        printf("Set\n");
    } else {
        printf("Not Set\n");
    }

    return 0;
}