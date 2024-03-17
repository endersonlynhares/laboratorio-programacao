#include<stdio.h>

int main(){

    int limA, limB;
    printf("Digite o valor inicial do limite: ");
    scanf("%d", &limA);
    printf("Digite o valor final do limite: ");
    scanf("%d", &limB);

    if(limA > limB){
        for(int i = limA; i >= limB; i--){
            if(!(i % 4)){
                printf("%d \n", (i*i));
            }
        }
    }else{
        for(int i = limA; i <= limB; i++){
            if(!(i % 4)){
                printf("%d \n", (i*i));
            }
        }
    }

    return 0;
}