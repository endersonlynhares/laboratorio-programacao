 #include<stdio.h>

int main(){
	float valueClass, discount, netSalary, grossSalary, hoursWorked;
	printf("Qual é o valor da hora aula: ");
	scanf("%f", &valueClass);
	printf("Digite a quantidade de horas trabalhadas: ");
	scanf("%f", &hoursWorked);
	printf("Qual é o percentual de desconto do INSS: ");
	scanf("%f", &discount);
	grossSalary = valueClass * hoursWorked;
	netSalary = grossSalary - (grossSalary * (float) discount / 100);
	printf("O salário bruto é: R$%.2f\n", grossSalary);
	printf("O salário líquido é: R$%.2f\n", netSalary);
	return 0;
}
