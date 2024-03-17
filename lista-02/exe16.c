#include<stdio.h>

int main(){

    int sum3 = 0, sum5 = 0;
    for(int i = 0; i <= 100; i++){
        if(!(i % 3)){
            sum3 += i;
        }

        if(!((i + 100) % 5)){
            sum5 += i;
        }
    }

    printf("O somatório dos divisores de 3 no intevalo de [0, 100] é: %d\n", sum3);
    printf("O somatório dos divisores de 5 no intevalo de [100, 200] é: %d\n", sum5);

    return 0;
}