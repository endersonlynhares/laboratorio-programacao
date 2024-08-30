#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<time.h>

#define SIZE 10
#define RANGE 10

void printArr(int *, int);
void populateVetor(int *, int, int);

int main(){
    srand(time(NULL));
    int *vetor = malloc(SIZE * sizeof(int));
    bool swapped;
    if(!vetor){
        printf("It's not possible to allocate memory.");
        exit(1);
    }
    populateVetor(vetor, SIZE, RANGE);
    printArr(vetor, SIZE);

    for(int i = 0; i < SIZE - 1; i++){
        swapped = false;
        for(int j = 0; j < SIZE - i - 1; j++){
            if(*(vetor + j) > *(vetor + (j+1)){
                int temp = *(vetor + j);
                *(vetor + j) = *(vetor + (j+1));
                *(vetor + (j+1)) = temp;
                swapped = true;
            }
        }

        if(swapped == false) break;
    }

    printf("\n");

    printArr(vetor, SIZE);

    return 0;
}

void populateVetor(int *vetor, int size, int range){
    for(int i = 0; i < size; i++){
        *(vetor + i) = rand() % range + 1;
    }
}

void printArr(int *vetor, int size){
    for(int i = 0; i < size; i++){
        printf("%2d ", *(vetor + i));
    }
    printf("\n");
}