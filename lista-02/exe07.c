#include<stdio.h>

int main(){

    float a, b, resultado;
    printf("Digite um valor A: ");
    scanf("%f", &a);
    printf("Digite um valor B: ");
    scanf("%f", &b);

    while(b == 0){
        printf("Por favor digite um valor válido para B: ");
        scanf("%f", &b);
    }

    resultado = a / b;

    printf("O resultado da divisão entre os números é: %.2f", resultado);


    return 0;
}