#include<stdio.h>

int main(){

    double PI = 4;

    for(int i = 1; i <= 100; i++){
            if(!(i % 2)){
                PI += ((float) 4/((2*i)+1));
            }else{
                PI -= ((float) 4/((2*i)+1));
            }
        printf("Com %d termo(s) o valor de PI é: %f\n", i, PI);
    }

    return 0;
}