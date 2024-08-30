#include <stdio.h>
#include <stdlib.h>

#define TRUE 1

struct PESSOA {
    unsigned char id;
    char nome[60];
    unsigned char idade;
};

void readPessoa(struct PESSOA *pessoa, int id) {
    pessoa->id = (unsigned char) id;
    printf("--\t PESSOA %d \t--\n", id);
    printf("Digite o nome da pessoa: ");
    scanf("%s", pessoa->nome);
    printf("Digite a idade da pessoa: ");
    scanf("%hhu", &pessoa->idade);
    printf("\n");
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
    readPessoa(&(*(*pessoas + (newSize - 1))), newSize);

    *actualSize = newSize;
}

void consultarPessoas(struct PESSOA *pessoas, int size) {
    for (int i = 0; i < size; i++) {
        printf("ID: %d, Nome: %s, Idade: %hhu\n", pessoas[i].id, pessoas[i].nome, pessoas[i].idade);
    }
}

unsigned char menuOption() {
    unsigned char op;
    printf("---\t MENU DE OPCOES \t---\n");
    printf("[1] \t-\t CONSULTAR PESSOAS\n");
    printf("[2] \t-\t ADICIONAR UMA NOVA PESSOA\n");
    printf("[3] \t-\t CONSULTA PESSOA POR ID\n");
    printf("Sua escolha: ");
    scanf("%hhu", &op);

    return op;
}

void executeOption(unsigned char option, struct PESSOA **pessoas, int *actualSize) {
    switch(option) {
        case 1:
            consultarPessoas(*pessoas, *actualSize);
            break;
        case 2:
            insertPessoa(pessoas, actualSize);
            break;
        default:
            printf("Opcao invalida.\n");
            break;
    }
}

int main() {
    int size = 0;
    struct PESSOA *pessoas = NULL;
    unsigned char option;

    while (TRUE) {
        option = menuOption();
        executeOption(option, &pessoas, &size);
    }

    free(pessoas);
    return 0;
}
