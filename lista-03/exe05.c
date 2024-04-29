#include<stdio.h>
#include<string.h>

#define SIZE 80

int main(){

	char sentence1[SIZE], sentence2[SIZE], new_sentence[SIZE * 2];
	printf("Digite primeira palavra: ");
	scanf("%s%*c", sentence1);
	printf("Digite a segunda palavra: ");
	scanf("%s%*c", sentence2);
	
	for(int i = 0; i < strlen(sentence1); i++){
		new_sentence[i] = sentence1[i];
	}
	new_sentence[strlen(sentence1)] = ' ';
	for(int i = strlen(sentence1) + 1; i <= (strlen(sentence1) + strlen(sentence2)); i++){
		new_sentence[i] = sentence2[i-9];
	}

	new_sentence[(strlen(sentence1) + strlen(sentence2)) + 1] = '\0';

	printf("A string concatenada fica: %s\n", new_sentence);

	return 0;
}
