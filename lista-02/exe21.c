#include<stdio.h>

int main(){
    int number = 11611, aux, newNumber = 0;
    printf("Digite um numero de 5 digitos: ");
    scanf("%d", &number);
    aux = number;

    while (aux != 0) {
        int digito = aux % 10;
        newNumber = (newNumber * 10) + digito;
        aux /= 10;
    }

    if(number == newNumber){
        printf("É palindromo\n");
    }else{
        printf("NÃO é palindromo\n");
    }

    return 0;
}