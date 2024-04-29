/*
 * EXERCICIO 6.15 DO LIVRO DO DEITEL
 * */

#include<stdio.h>

#define SIZE 20

int main(){
	int v[SIZE], isDuplicated;
	for(int i = 0; i < SIZE; i++){
		printf("Digite um numero entre [10 e 100]: ");
		scanf("%d", &v[i]);
		isDuplicated = 0;

		for(int j = (i-1); j >= 0; j--){
			if(v[j] == v[i]){
				isDuplicated = 1;
			}
		}

		if(!isDuplicated){
			printf("UM NOVO NUMERO FOI ADD: %d\n", v[i]);
		}

	}

}
