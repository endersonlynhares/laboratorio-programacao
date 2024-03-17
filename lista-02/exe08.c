#include <stdio.h>

int main() {

  float valueMercadoria, valueEntrada;
  int valueParcela;
  printf("Digite o valor da mercadoria: ");
  scanf("%f", &valueMercadoria);

  valueParcela = valueMercadoria / 3;
  valueEntrada = valueMercadoria - (2 * valueParcela);

  printf("O valor da entrada será de: R$%.2f\n", valueEntrada);
  printf("O valor de cada parcela será de: R$%.2f\n", (float)valueParcela);

  return 0;
}