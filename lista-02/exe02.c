#include<stdio.h>

int main(){
    unsigned char op;
    do{
        printf("Digite um numero: ");
        scanf("%hhu%*c", &op);

        if(op >= 7){
            printf("Dia inválido!\n");
        }else {
             switch(op){
                case 1:
                    printf("Domingo\n");
                    break;
                case 2:
                    printf("Segunda\n");
                    break;
                case 3:
                    printf("Terça\n");
                    break;
                case 4:
                    printf("Quarta\n");
                    break;
                case 5:
                    printf("Quinta\n");
                    break;
                case 6:
                    printf("Sexta\n");
                    break;
                case 7:
                    printf("Sábado\n");
                    break;
            }
        }

    }while(op != 0);

    return 0;
}
