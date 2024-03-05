#include<stdio.h>

int main(){

	float height, width, length, volume;
	printf("Digite a largura da caixa: ");
	scanf("%f", &width);
	printf("Digite a altura da caixa: ");
	scanf("%f", &height);
	printf("Digite o comprimento da caixa: ");
	scanf("%f", &length);

	volume = height * width * length;

	printf("O volume da caixa é: %.2f\n", volume);


	return 0;
;}
