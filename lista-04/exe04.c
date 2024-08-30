#include<stdio.h>
#include<stdlib.h>

#define SIZE 5

void populateVector(int *, int);

int main(){
    int *int_vector = malloc(SIZE * sizeof(int));
    if(!int_vector){
        printf("It is not possible to allocate memory.");
        exit(1);
    }
    
    populateVector(int_vector, SIZE);

    for(int i = 0; i < SIZE; i++){
        printf("Value: %d \t-\t Address: %p\n", *(int_vector + i), (int_vector + i));
    }

    return 0;
}

void populateVector(int *vector, int size){
    int value;
    for(int i = 0; i < size; i++){
        printf("Enter a value for position %d: ", i);
        scanf("%d", (vector + i));
    }
}