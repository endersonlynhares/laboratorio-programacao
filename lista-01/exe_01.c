#include <stdio.h>

int main() {
    int x;
    printf("Será executado primeiro a multiplicação (3 * 6), depois a divisão (18 / 2), e por fim, ou a soma ou a subtração.\n");
    x = 7 + 3 * 6 / 2 - 1;
    printf("O RESULTADO É: %d\n\n", x);
    printf("Será feito primeiro o modulo de 2 por 2, depois a multiplicação (2 * 2) e a divisão (2/2), com isso, realizando as outras operações de soma esubtração das resultantes das outras operações\n");
    x = 2 % 2 + 2 * 2 - 2 / 2;
    printf("O RESULTADO É: %d\n\n", x);
    printf("Será feito primeiroa multiplicação (9 * 3), depois a divisão (27 / (3)), após isso será somado com 3, depois 9 e por 3.\n");
    x = (3 * 9 * (3 + (9 * 3 / (3))));
    printf("O RESULTADO É: %d\n\n", x);
    return 0;

}
