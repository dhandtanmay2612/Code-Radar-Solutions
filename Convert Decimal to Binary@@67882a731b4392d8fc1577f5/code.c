#include <stdio.h>

int main() {
  int num;
  scanf("%d", &num);

  if (num == 0) {
    printf("0\n");
    return 0;
  }

  int binary[32]; // Assuming 32-bit integers
  int i = 0;

  while (num > 0) {
    binary[i] = num & 1; // Get the least significant bit
    num >>= 1;            // Right shift to process the next bit
    i++;
  }

  // Print the binary representation in reverse order
  for (int j = i - 1; j >= 0; j--) {
    printf("%d", binary[j]);
  }
  printf("\n");

  return 0;
}