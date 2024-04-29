#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define SIZE 15
#define RANGE 20
int main(){
	srand(time(NULL));
	float numbers[SIZE], maior, menor, soma = 0;
	
	for(int i = 0; i < SIZE; i++){
		numbers[i] = (rand() % RANGE) + 1;
	}

	maior = menor = numbers[0];

	for(int i = 1; i < SIZE; i++){
		if(numbers[i] > maior){
			maior = numbers[i];
		}

		if(numbers[i] < menor){
			menor = numbers[i];
		}
	}

	soma = maior + menor;

	printf("A soma entre o maior = %.2f e menor = %.2f é: %.2f\n", maior, menor, soma);

	return 0;
}
