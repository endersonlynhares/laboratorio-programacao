#include<stdio.h>

int main(){
	int number;
	printf("Digite um valor inteiro: ");
	scanf("%d", &number);
	printf("O valor digitado foi %d e seu sucessor é %d e o seu antecessor é %d", number, (number + 1), (number - 1));

	return 0;
}
