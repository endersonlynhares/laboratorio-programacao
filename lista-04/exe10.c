#include<stdio.h>
#include<stdlib.h>

#define N 10
#define SIZE 15

void populateVetor(int *, int, int);
void printVetor(int *, int);

int main(){
    int *x = malloc(SIZE * sizeof(int));
    int *f = calloc(N, sizeof(int));

    populateVetor(x, SIZE, N);

    for(int i = 0; i < SIZE; i++){
        *(f + *(x + i)) += 1;
    }
    printVetor(x, SIZE);
    printVetor(f, N);
    
    return 0;
}

void populateVetor(int *vetor, int size, int range){
    for(int i = 0; i < size; i++){
        *(vetor + i) = rand() % range;
    }
}

void printVetor(int *vetor, int size){
    for(int i = 0; i < size; i++){
        printf("%2d ", *(vetor + i));
    }
    printf("\n");
}