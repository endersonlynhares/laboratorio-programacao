#include<stdio.h>

int main(){

    for(int i = 1; i <= 500; i++){
        for(int j = 1; j <= 500; j++){
            for(int k = 1; k <= 500; k++){
                int hip = (i*i) + (j*j);
                if(hip == (k*k)){
                    printf("---- TRIPLA DE PITAGORAS ----\n");
                    printf("CATETO 1: %d\n", i);
                    printf("CATETO 2: %d\n", j);
                    printf("HIPOTENUSA: %d\n", k);
                }
            }
        }
    }

    return 0;
}