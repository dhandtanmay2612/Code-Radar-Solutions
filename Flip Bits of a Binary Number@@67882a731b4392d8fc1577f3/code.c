#include <stdio.h>

int main() {
  int num;
  scanf("%d", &num);

  // Flip all bits using the bitwise NOT operator (~)
  int flipped_num = ~num;

  printf("%d\n", flipped_num);
  return 0;
}