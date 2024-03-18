#include<stdio.h>

int main(){

    int limA, limB, qtdNum;
    double average = 0;
    printf("Digite a faixa inicial: ");
    scanf("%d", &limA);
    printf("Digite a faixa final: ");
    scanf("%d", &limB);
    qtdNum = (limB - limA) + 1;

    for(int i = limA; i <= limB; i++){
        average += ((float) i / qtdNum);
    }

    printf("A média aritmética entre a faixa de [%d, %d] é: %.2f\n", limA, limB, average);

    return 0;
}