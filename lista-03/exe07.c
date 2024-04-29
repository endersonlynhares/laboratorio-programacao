#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

#define SIZE 3
#define RANGE 19

int main(){
	srand(time(NULL));
	int vetor[SIZE];
	float media_aritmetica = 0, media_geometrica = 1;
	for(int i = 0; i < SIZE; i++){
		vetor[i] = rand() % RANGE;
	}

	for(int i = 0; i < SIZE; i++){
		printf("%8d", vetor[i]);
		media_aritmetica += (float) vetor[i] / 3;
		media_geometrica *= vetor[i];
	}

	media_geometrica = pow(media_geometrica, ((float) 1 / 3));

	printf("\nA média aritmética é: %.2f\n", media_aritmetica);	
	printf("A média geométrica é: %.2f\n", media_geometrica);

	return 0;
}
