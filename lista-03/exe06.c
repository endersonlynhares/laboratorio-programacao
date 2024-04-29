#include<stdio.h>
#include<string.h>

#define SIZE 80
int main(){
	char sentence[SIZE] = "Enderson";

	for(int i = (int) strlen(sentence); i >= 0; i--){
		putchar(sentence[i]);
	}
	
	printf("\n");

	return 0;
}
