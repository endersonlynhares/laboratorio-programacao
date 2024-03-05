#include <stdio.h>
#include <string.h>

int main() {

  char teste[] = "A BCabc 0 12 $ * + /";
  int length = strlen(teste);

  for (int i = 0; i < length; i++) {
    if (teste[i] == 32) {
      printf("space");
    } else {
      printf("%c", teste[i]);
    }
    printf(" => %d\n", teste[i]);
  }

  return 0;
}
