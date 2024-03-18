#include<stdio.h>

int main(){
    printf("------ USANDO O PRÉ-INCREMENTAR ------\n");
    for (int i = 5; i > 0; --i) {
        printf("Valor de i: %d\n", i);
    }

    printf("------ USANDO O PÓS-INCREMENTAR ------\n");
    for (int i = 5; i > 0; i--) {
        printf("Valor de i: %d\n", i);
    }
    return 0;
}