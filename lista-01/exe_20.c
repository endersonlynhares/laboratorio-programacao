#include<stdio.h>
int main(){

	int num, numIndicator;
	printf("Digite um numero: ");
	scanf("%d", &num);

	numIndicator = num & 1;

	printf("O VALOR DIGITADO É: %s\n", numIndicator ? "ÍMPAR" : "PAR");


	return 0;
}
