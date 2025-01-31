#include <stdio.h>

int main() {
    int number, n;
    scanf("%d %d", &number, &n);
    int result = (number >> n) & 1;
    printf("%d\n", result);

    return 0;
}