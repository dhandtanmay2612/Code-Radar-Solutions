#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    // Swap a and b using XOR
    a ^= b;
    b ^= a;
    a ^= b;

    printf("a = %d, b = %d\n", a, b);

    return 0;
}
