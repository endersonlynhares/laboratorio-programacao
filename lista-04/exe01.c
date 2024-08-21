#include <stdio.h>

void somar(int *, int *, int *);

int main(void) {
  int x, y, sum, *px, *py, *psum;
  px = &x;
  py = &y;
  psum = &sum;
  printf("Digite o primeiro valor: ");
  scanf("%d", px);
  printf("Digite o segundo valor: ");
  scanf("%d", py);
  somar(px, py, psum);
  return 0;
}

void somar(int *px, int *py, int *psum) { *psum = *px + *py; }