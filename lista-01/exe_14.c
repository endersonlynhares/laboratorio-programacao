#include<stdio.h>

int main(){

	float graus, fahrenheit;
	printf("Digite o valor em graus que deseja converter: ");
	scanf("%f", &graus);
	fahrenheit = (9 * graus + 160) / 5;
	printf("A temperatura em C° é: %.2f\nA temperatura em F° é: %.2f\n", graus, fahrenheit);
	return 0;
}
