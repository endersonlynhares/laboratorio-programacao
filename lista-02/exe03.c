#include<stdio.h>

int main(){

    int F, fat = 1;
    printf("Digite um numero: ");
    scanf("%d", &F);
    for(int i = 1; i <= F; i++){
        fat *= i;
    }

    printf("O fatorial de %d é %d", F, fat);

    return 0;
}
