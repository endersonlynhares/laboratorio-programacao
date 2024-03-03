#include<stdio.h>

int main(){
	int num;
	printf("Digite um valor para saber seu modulo: ");
	scanf("%d", &num);
	printf("O valor digitado foi %d e teu seu módulo igual a: ", num);
	if(num < 0){
		num = ~num;
		num += 1;
	}

	printf("%d\n", num);

    return 0;
}
