#include<stdio.h>

int main(){

    

    for(int i = 1; i <= 256; i++){
        printf("NUMERO: %d \t|", i);
        printf("OCTAL: %o \t|", i);
        printf("HEXA: %X \t|", i);
        printf("BIN: ");
        for (unsigned j = 1 << 8; j > 0; j /= 2)
            (i & j) ? printf("1") : printf("0");
        printf("\t|\n");            
        printf("-----------\t|");
        printf("----------\t|");
        printf("---------\t|");
        printf("--------\t|\n");
    }

    return 0;
}