#include<stdio.h>
#include<string.h>
#define SIZE 80

int main(){
	char sentence1[SIZE], sentence2[SIZE], new_sentence[SIZE * 2];
	printf("Digite uma palavra: ");
	scanf("%s%*c", sentence1);
	printf("Digite uma outra palavra: ");
	scanf("%s%*c", sentence2);
	strcpy(new_sentence, sentence1);
	strcat(new_sentence, sentence2);

	printf("As duas strings concatenadas fica: %s\n", new_sentence);

	return 0;
}
