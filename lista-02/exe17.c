#include<stdio.h>

int main(){

    for(int i = 10; i <= 100; i+=10){
        printf("O valor de %d°C é %.2f°F\n", i, ((i * 1.8) + 32));
    }

    return 0;
}