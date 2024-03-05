#include<stdio.h>

int main(){
	int num1, num2;
	printf("Digite um numero: ");
	scanf("%d", &num1);
	printf("Digite um outro numero: ");
	scanf("%d", &num2);

	printf("O primeiro numero é multiplo do segundo? [%s]\n", (num1 % num2) ? "SIM" : "NÃO");

	return 0;
}
