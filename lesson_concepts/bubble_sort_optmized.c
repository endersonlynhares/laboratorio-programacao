#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define SIZE 10
#define RANGE 20

int main(){
	srand(time(NULL));
	int v[SIZE], hasSwap;
	for(int i = 0; i < SIZE; i++){
		v[i] = 1 + (rand() % RANGE);
	}
	
	clock_t begin = clock();

	for(int i = 0; i < SIZE; i++){
		hasSwap = 0;
		for(int j = i + 1; j < SIZE; j++){
			if(v[i] > v[j]){
				v[i] ^= v[j];
				v[j] ^= v[i];
				v[i] ^= v[j];
				hasSwap = 1;
			}
		}
		if(!hasSwap){
			break;
		}
	}

	clock_t end = clock();

	double time_spent = (double) (end - begin) / CLOCKS_PER_SEC;
	printf("\n\nTEMPO: %f\n\n", time_spent);	
	printf("-- VETOR ORDENADO --\n\n");
	for(int i = 0; i < SIZE; i++){
		printf("%6d", v[i]);
	}
	printf("\n\n");
}
