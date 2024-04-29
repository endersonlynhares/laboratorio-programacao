#include<stdio.h>
#include<string.h>

#define SIZE 80

int main(){
	char sentence1[SIZE], sentence2[SIZE];

	printf("Digite a primeira palavra: ");
	scanf("%s%*c", sentence1);
	printf("Digite a segunda palavra: ");
	scanf("%s%*c", sentence2);

	if(!(strcmp(sentence1, sentence2))){
		printf("SÃO IGUAIS\n");
	}else{
		printf("NÃO SÃO IGUAIS\n");
	}

	return 0;
}
