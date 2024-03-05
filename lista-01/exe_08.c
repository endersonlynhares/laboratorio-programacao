#include<stdio.h>

int main(){
	int value;
	printf("Digite um valor inteiro: ");
	scanf("%d", &value);
	printf("O valor %d elevado ao quadrado é: %d", value, (value * value));
	return 0;
}
