#include<stdio.h>

int main(){

    int limA, limB, sum = 0;
    printf("Digite o valor inicial do limite: ");
    scanf("%d", &limA);
    printf("Digite o valor final do limite: ");
    scanf("%d", &limB);

    if(limA > limB){
        limA ^= limB;
        limB ^= limA;
        limA ^= limB;
    }

    for(int i = limA; i <= limB; i++){
        if(!(i % 3)){
            printf("%d\n", i);
        }
    }

    return 0;
}