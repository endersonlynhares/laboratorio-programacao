#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define SIZE 5
#define RANGE 20

int main(){
		
	int v[SIZE], pos_menor, aux;
	srand(time(NULL));

	printf("----VETOR DESORDENADO----\n");

	for(int i = 0; i < SIZE; i++){
		v[i] = 1 + (rand() % RANGE);
		printf("%10d", v[i]);
	}

	for(int i = 0; i < SIZE; i++){
		pos_menor = i;
		for(int j = i + 1; j < SIZE; j++ ){
			if(v[j] < v[pos_menor]){
				pos_menor = j;
			}
		}
		v[pos_menor] ^= v[i];
		v[i] ^= v[pos_menor];
		v[pos_menor] ^= v[i];
	}

	printf("\n\n----VETOR ORDENADO----\n");
	for(int i = 0; i < SIZE; i++){
		printf("%10d", v[i]);
	}
	printf("\n\n");

	return 0;
}
