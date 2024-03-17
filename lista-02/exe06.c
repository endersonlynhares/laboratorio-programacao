#include <stdio.h>

#define TRUE 1

int main(void) {

  int totalWishes = 0, wishesRenata = 0, wishesPaulo = 0, nullWishes = 0,
      blankWishes = 0;

  while (TRUE) {
    char option;
    printf(
        "Em quem deseja votar?\n[5] - Paulo\n[7] - Renata\n[0] - Em branco\n");
    scanf("%c%*c", &option);
    if (option < '0') {
      break;
    }
    printf("Deseja realmente votar no numero %c?\n[S] - sim\n[N] - não\n",
           option);
    char confirm;
    scanf("%c%*c", &confirm);
    if (confirm == 'S') {
      if (option == '5') {
        wishesPaulo++;
      } else if (option == '7') {
        wishesRenata++;
      } else if (option == '0') {
        blankWishes++;
      } else {
        nullWishes++;
      }
    } else {
      continue;
    }
  }

  totalWishes = wishesRenata + wishesPaulo + nullWishes + blankWishes;
  printf("-------- INFORMAÇÕES DA URNA --------\n");
  printf("RENATA: %.2f%%\n", (float)wishesRenata / totalWishes * 100);
  printf("PAULO: %.2f%%\n", (float)wishesPaulo / totalWishes * 100);
  printf("NULOS: %.2f%%\n", (float)nullWishes / totalWishes * 100);
  printf("BRANCOS: %.2f%%\n", (float)blankWishes / totalWishes * 100);
  printf("ELEITO: %s\n", wishesPaulo > wishesRenata ? "PAULO" : "RENATA");
  return 0;
}