#include<stdio.h>
#include<string.h>

#define SIZE 80

int main(){
	char sentence[SIZE], caracter;
	printf("Digite uma palavra: ");
	fgets(sentence, 80, stdin);
	printf("Digite uma letra: ");
	scanf("%c", &caracter);

	if(strchr(sentence, caracter) != NULL){
		printf("A letra está contida na palavra!\n");
	}else{
		printf("A letra NÃO está contida na palavra!\n");
	}

	return 0;
}
