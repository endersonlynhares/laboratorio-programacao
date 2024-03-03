#include<stdio.h>

int main(){
    float radio, PI = 3.14159;
    printf("Informe o valor do raio da circunferência: ");
    scanf("%f", &radio);
    printf("O diâmetro da circunferência é: %f", (radio * 2));
    printf("O comprimento da circunferência é: %f", (radio * 2 * PI));
    printf("A área da circunferência é: %f", ( PI * (radio * radio)));
    return 0;
}