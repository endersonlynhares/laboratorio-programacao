#include<stdio.h>

#define TRUE 1

int main(){
    int altPedro = 110, altJose = 150, factor = 2, anos = 1;

    while(TRUE){
        altJose += factor;
        altPedro += factor + 1;
        anos += 1;
        if(altPedro == altJose){
            printf("Em %d anos Pedro será ser maior que José.", anos);
            break;
        }
    }


    return 0;
}
