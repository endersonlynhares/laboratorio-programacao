#include<stdio.h>
int main(){

    float realValue, dollarPrice, totalDollar;

    printf("Digite a cotação do dollar hoje: $");
    scanf("%f", &dollarPrice);
    printf("Digite a quantidade reais que deseja converter: R$");
    scanf("%f", &realValue);

    totalDollar = realValue * dollarPrice;

    printf("De acordo com a cotação do dollar informado, a quantidade de %.f reais é: $%.2f\n", realValue, totalDollar);

    return 0;
}
