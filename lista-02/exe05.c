#include<stdio.h>

int main(){
    unsigned char num, maior, menor;
    printf("Digite um numero: ");
    scanf("%hhu%*c", &num);
    maior = menor = num;

    while(num != 0){
        printf("Digite mais um numero: [0 - SAIR]:  ");
        scanf("%hhu%*c", &num);

        if(num > maior){
            maior = num;
        }

        if(num < menor && num != 0){
            menor = num;
        }
    }

    printf("MAIOR NUMERO DIGITADO: %hhu\n", maior);
    printf("MENOR NUMERO DIGITADO: %hhu\n", menor);

    return 0;
}
