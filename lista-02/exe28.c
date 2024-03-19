#include<stdio.h>

int main(){

    unsigned char x, y, mask = 15;
    printf("Digite um numero x qualquer: ");
    scanf("%hhu%*c", &x);
    printf("Digite um numero y maior ou igual a 5: ");
    scanf("%hhu%*c", &y);
    
    printf("%hhu\n", mask);
    mask <<= (y/2);
    
    mask &= x;

    printf("X com os bits escondidos é: %hhu", mask);

    return 0;
}