#include<stdio.h>
#include<math.h>
int main(){

	float num1, num2, num3, averageArith, averageGeo;
	printf("Digite um numero: ");
	scanf("%f", &num1);
	printf("Digite um segundo numero: ");
	scanf("%f", &num2);
	printf("Digite um terceiro numero: ");
	scanf("%f", &num3);
	
	averageArith = (num1 + num2 + num3) / 3;
	averageGeo = pow((num1 * num2 * num3),(1 / (float) 3));
	
	printf("A média aritmetica é: %.2f\n", averageArith);
	printf("A média geométrica é: %.2f\n", averageGeo);
	return 0;
}
