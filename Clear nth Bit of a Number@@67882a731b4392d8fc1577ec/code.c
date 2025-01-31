#include <stdio.h>

int main() {
    int number, n;

    scanf("%d %d", &number, &n);

    number &= ~(1 << n); 

    printf("%d\n", number);

    return 0;
}