#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define N 7
#define SIZE 20

int *allocateArr(int);
int **allocateMatrix(int **, int, int);
void populateArr(int *, int, int);
void printArr(const int *, int);
void printMatrix(int **, int, int);

int main(){
    srand(time(NULL));
    int **matrix = allocateMatrix(NULL, N, N);
    int *arrX = allocateArr(SIZE), *arrY = allocateArr(SIZE);
    populateArr(arrX, SIZE, N);
    populateArr(arrY, SIZE, N);

    printArr(arrX, SIZE);
    printArr(arrY, SIZE);

    for(int i = 0; i < SIZE; i++){
        *((matrix + *(arrX + i)) + *(arrY + i)) += 1;
    }

    printMatrix(matrix, N, N);

    // Liberação da memória
    for(int i = 0; i < N; i++){
        free(matrix[i]);
    }
    free(matrix);
    free(arrX);
    free(arrY);

    return 0;
}

void printMatrix(int **matrix, int lines, int columns){
    for(int i = 0; i < lines; i++){
        for(int j = 0; j < columns; j++){
            printf("%d ", *(*(matrix + i) + j));
        }       
        printf("\n");
    }
    printf("\n");
}

int *allocateArr(int size){
    int *pr;
    if(!(pr = calloc(size, sizeof(int)))){
        printf("Não foi possível alocar memória!");
        exit(1);
    }

    return pr;
}

int **allocateMatrix(int **p, int lines, int columns){
    int **pr;
    if(!(pr = realloc(p, lines * sizeof(int*)))){
        printf("Não foi possível alocar o numero de linhas desejado na matriz.");
        exit(1);
    }

    for(int i = 0; i < lines; i++){
        *(pr + i) = allocateArr(columns);
    }

    return pr;
}

void populateArr(int *array, int size, int range){
    for(int i = 0; i < size; i++){
        *(array + i ) = rand() % range;
    }
}

void printArr(const int *array, int size){
    for(int i = 0; i < size; i++){
        printf("%d  ", *(array + i));
    }
    printf("\n");
}
