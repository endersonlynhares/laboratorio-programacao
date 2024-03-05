#include <stdio.h>

int main() {

  int hours, minutes, seconds, totalSeconds = 0;
  printf("Digite a quantidade de horas: ");
  scanf("%d", &hours);
  printf("Digite a quantidade de minutos: ");
  scanf("%d", &minutes);
  printf("Digite a quantidade de segundos: ");
  scanf("%d", &seconds);

  totalSeconds += hours * 60 * 60;
  totalSeconds += minutes * 60;
  totalSeconds += seconds;
  printf("O total de segundos é: %d", totalSeconds);

  return 0;
}
