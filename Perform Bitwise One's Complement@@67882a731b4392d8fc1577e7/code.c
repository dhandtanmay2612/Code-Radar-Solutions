#include <stdio.h>

int main() {
    int a;

    scanf("%d", &a);

    // Perform bitwise one's complement
    a = ~a;

    printf("%d\n", a);

    return 0;
}