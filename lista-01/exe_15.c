#include<stdio.h>

int main(){
	int workDays, bonusPercent;
	float totalSalary = 50.25;
	printf("Digite a quantidade de dias trabalhadas: ");
	scanf("%d", &workDays);
	totalSalary *= workDays;

	if(workDays <= 10){
		bonusPercent = 0;
	}else if(workDays <= 20){
		bonusPercent = 20;
	}else{
		bonusPercent = 30;
	}

	totalSalary += totalSalary * ((float) bonusPercent / 100);
	totalSalary -= totalSalary * ((float) 10 / 100);

	printf("O valor a ser recebido com a gratificação e diniminuído com o valor do imposto é de: R$%.2f", totalSalary);

	return 0;
}
