#include <stdio.h>

int main() {
  int num;
  scanf("%d", &num);

  int count = 0;
  while ((num & 1) == 0 && num != 0) {
    count++;
    num >>= 1;
  }

  printf("%d\n", count);
  return 0;
}