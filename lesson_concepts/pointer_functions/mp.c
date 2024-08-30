#include<stdio.h>
#include<stdlib.h>

#define TRUE 1

struct PESSOA {
    unsigned char id;
    char nome[60];
    unsigned char idade;
};

void readPessoa(int id, struct PESSOA *pessoa){
    struct PESSOA genericPessoa;
    genericPessoa.id = (unsigned char) id;
    printf("--\t PESSOA %d \t--\n", id);
    printf("Digite o nome da pessoa: ");
    scanf("%s", &genericPessoa.nome);
    printf("Digite a idade da pessoa: ");
    scanf("%hhu", &genericPessoa.idade);
    printf("\n");
    *pessoa = genericPessoa;
}

void insertPessoa(struct PESSOA **pessoas, int *actualSize){
    int newSize = *actualSize + 1;
    struct PESSOA *temp = realloc(*pessoas, newSize * sizeof(struct PESSOA));
    if(!temp){
        printf("Nao foi possivel adicionar mais uma pessoa");
        return;
    }
    *pessoas = temp;
    struct PESSOA *pessoa;
    readPessoa(newSize, &(*(*pessoas + (newSize - 1))));

    *actualSize = newSize;
}

unsigned char menuOption(){
    unsigned char op;
    printf("---\t MENU DE OPCOES \t---\n");
    printf("[1] \t-\t CONSULTAR PESSOAS\n");
    printf("[2] \t-\t ADICIONAR UMA NOVA PESSOA\n");
    printf("[3] \t-\t CONSULTA PESSOA POR ID\n");
    printf("Sua escolha: ");
    scanf("%hhu", &op);

    return op;
}

typedef (*FuncPessoa)();

int main(){
    FuncPessoa function[]() = {readPessoa, insertPessoa};
    int size = 3, *psize = &size;
    struct PESSOA *pessoas = NULL;
    unsigned char option;

    if(!(pessoas = malloc(*psize * sizeof(struct PESSOA)))){
        printf("Memoria insuficiente.");
        exit(1);
    }

    while(TRUE){
        option = menuOption();
        (*function(option));
    }

    return 0;
}