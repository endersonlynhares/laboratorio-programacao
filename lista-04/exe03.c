#include<stdio.h>

#define TRUE 1

void verifyMinor(int *, int *);

int main(){
    int n, *pn = &n, minor, *pminor = &minor;
    char op, *pop = &op;

    printf("Digite um numero: ");
    scanf("%d", pn);

    *pminor = *pn;

    while(TRUE){
        printf("O menor número digitado até foi: %d\n", *pminor);

        //criterio é digitar S ou N 
        printf("Deseja digitar outro numero? [S/N]");
        scanf(" %c", pop);

        if(*pop == 'N' || *pop == 'n'){
            break;
        }

        printf("Digite um numero: ");
        scanf("%d ", pn);
        verifyMinor(pn, pminor);
    }
}

void verifyMinor(int *enterValue, int *actualMinor){
    if(*enterValue <= *actualMinor){
        *actualMinor = *enterValue;
    }
}