#include<stdio.h>

int main(){
	float height, formula;
	printf("Digite sua altura: ");
	scanf("%f%*c", &height);
	printf("Digite seu sexo - [M/F]: ");
	char gender = getchar();
	
	if(gender == 'M'){
		formula = 72.7 * height - 58;
	}else {
		formula = 62.1 * height - 44.7;
	}

	printf("O peso ideal de acordo com suas informações é: %.2f", formula);

	return 0;
}
