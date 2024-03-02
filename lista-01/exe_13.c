#include<stdio.h>

int main(){
    unsigned char num1, num2;
    printf("Digite o primeiro valor: ");
    scanf("%hhu", &num1);
    printf("Digite o segundo valor: ");
    scanf("%hhu", &num2);

    printf("A troca entre os valores sendo inicialmente:\nA: %hhu e B: %hhu\n", num1, num2);

    num1 ^= num2;
    num2 ^= num1;
    num1 ^= num2;

    printf("Agora, com as trocas:\nA: %hhu e B: %hhu\n", num1, num2);
    return 0;
}
