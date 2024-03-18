#include<stdio.h>

int fat(int num){
    int fat = 1;

    for(int i = 1; i <= num; i++){
        fat *= i;
    }

    return fat;
}

int main(){

    for(int i = 1; i <= 10; i++){
        if(i % 2){
            printf("O fatorial de %d é: %d\n", i, fat(i));
        }
    }

    return 0;
}