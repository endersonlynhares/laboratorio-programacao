#include<stdio.h>

int main(){

    float number;
    printf("Digite um valor real: ");
    scanf("%f", &number);

    printf("O valor digitado com uma casa decimal é %.1f", number);

    return 0;
}
