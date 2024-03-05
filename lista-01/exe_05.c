#include<stdio.h>

int main(){
    float check, totalValue;
    printf("Digite o valor da conta: ");
    scanf("%f", &check);
    totalValue = check + (check * ( (float) 10 / 100));
    printf("O valor de %.2f com o acrescimo de 10% é de: %.2f", check, totalValue);

    return 0;
}
