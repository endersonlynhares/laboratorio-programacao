#include<stdio.h>
#include<string.h>

#define SIZE 80

int main(){
	char sentence1[SIZE], sentence2[SIZE];
	unsigned char isEqual = 1;

	printf("Digite a primeira palavra: ");
	scanf("%s%*c", sentence1);

	printf("Digite a segunda palavra: ");
	scanf("%s%*c", sentence2);

	if(strlen(sentence1) != strlen(sentence2)){
		printf("As palavras NÃO são iguais\n");
	}else{
		for(int i = 0; i < strlen(sentence1); i++){
			if(sentence1[i] != sentence2[i]){
				isEqual = 0;
				break;
			}
		}
	
		printf("As palavras %s são iguais\n", (isEqual ? "" : "NÃO"));

	}

	return 0;
}
