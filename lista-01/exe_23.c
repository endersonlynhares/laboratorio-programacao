#include <stdio.h>

int main() {

  int num, factorDivider = 100, factorMultiplier = 1, newNumber = 0;
  printf("Digite um numero de três digitos: ");
  scanf("%d", &num);
  printf("O numero digitado foi: %d\n", num);

  while (factorDivider > 0) {
    int numberUnity = num / factorDivider;
    num %= factorDivider;
    newNumber += numberUnity * factorMultiplier;
    factorDivider /= 10;
    factorMultiplier *= 10;
  }

  printf("O inverso do numero é: %d\n", newNumber);

  return 0;
}
