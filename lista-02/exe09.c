#include<stdio.h>

int main(){

    int sequence = 1, aux = 0, i = 1;

    do{
        sequence += aux;
        aux = sequence;
        printf("%d, ", sequence);
    }while(i <= 20);

    return 0;
}