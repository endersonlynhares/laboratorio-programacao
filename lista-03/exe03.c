#include<stdio.h>
#define SIZE 80

int main(){
	char sentence[SIZE];
	int i = 0;
	printf("Digite uma palavra: ");
	scanf("%s%*c", sentence);
	while(sentence[i] != '\0'){
		i++;
	}

	printf("A quantidade de caracteres em '%s' é: %d\n", sentence, i);

	return 0;
}
