#include<stdio.h>
#include<math.h>

int main(){

    double sum = 0;

    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            sum += pow(2, ((8 * i) + j));
            //printf("%.0f\t|", pow(2, ((8 * i) + j)));
        }
        //printf("\n");
    }

    printf("Há ao todo %.0lf grãos de trigo no tabuleiro.\n", sum);

    return 0;
}