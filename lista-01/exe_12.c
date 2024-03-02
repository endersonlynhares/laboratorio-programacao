#include<stdio.h>

int main(){

	int num1, num2;
	printf("Digite o primeiro numero: ");
	scanf("%d", &num1);
	printf("Digite o segundo numero:");
	scanf("%d", &num2);

	printf("A soma entre os numeros é: %d\n", (num1 + num2));
	printf("O produto entre os numero é: %d\n", (num1 * num2));
	printf("A subtração entre os numeros é: %d\n", (num1 - num2));
	printf("O quociente entre os numeros é: %.2f\n", ((float) num1 / num2));
	printf("O resto da divisão entre os numeros é: %d\n", (num1 % num2));

	return 0;
}
