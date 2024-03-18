#include<stdio.h>

int main(){
    int num, aux, qtd7Num = 0;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    aux = num;

    while(aux != 0){
        int digit = aux % 10;
        if(digit == 7){
            qtd7Num += 1;
        }
        aux /= 10;
    }

    printf("A QUANTIDADE DE NUMEROS '7' É: %d\n", qtd7Num);

    return 0;
}