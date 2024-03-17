#include<stdio.h>

int main(){

    int num;
    printf("Digite um numero que queira mostrar tabuada: ");
    scanf("%d", &num);

    for(int i = 1; i <= 10; i++){
        printf("%d + %d = %d\t|\t", num, i, (i+num));
        printf("%d - %d = %d\t|\t", (i+num), num, ((i+num) - num));
        printf("%d * %d = %d\t|\t", num, i, (num + i));
        printf("%d / %d = %d\n", (i*num), num, ((i*num) / num));
    }

    return 0;
}