#include <stdio.h>

int main() {
    int x;
    printf("Digite um valor real: ");
    scanf("%d", &x);

    printf("O valor digitado foi: %d\n", x);
    printf("Seu valor em hexa e: %X\n", x);
    printf("Seu valor em octal e: %o", x);

    return 0;
}
