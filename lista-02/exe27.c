#include<stdio.h>

int main(){

    int menor, maior, num, produto;
    printf("Digite um numero: ");
    scanf("%d", &num);

    maior = menor = num;

    while(!((num < 0) && !(num % 2))){
        if(num > maior){
            maior = num;
        }

        if(num < menor){
            menor = num;
        }
        printf("Digite um outro numero: ");
        scanf("%d", &num);
    }

    produto = maior * menor;

    printf("O produto entre %d e %d é: %d\n", maior, menor, produto);

    return 0;
}