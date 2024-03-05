#include<stdio.h>

int main(){
    int x;
    printf("Digite um valor inteiro: ");
    scanf("%d", &x);

    printf("O triplo de %d é %d\n", x, (x * 3));
    printf("O quadrado de %d é %d\n", x, (x * x));
    printf("A metade de %d é %.2f\n", x, ((float) x / 2));

    return 0;
}
