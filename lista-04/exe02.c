#include <stdio.h>

void swapVal(int *, int *);

int main() {
  int x = 10, y = 7, *px = &x, *py = &y;

  printf("O valor de X é: %d\n", *px);
  printf("O valor de Y é: %d\n", *py);
  swapVal(px, py);
  printf("O valor ATUAL e X é: %d\n", *px);
  printf("O valor ATUAL de Y é: %d\n", *py);

  return 0;
}

void swapVal(int *x, int *y) {
  int temp = *y;
  *y = *x;
  *x = temp;
}
