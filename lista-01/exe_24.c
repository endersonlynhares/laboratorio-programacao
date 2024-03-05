#include<stdio.h>
int main(){
	int x, n, res;
	printf("Digite um valor x: ");
	scanf("%d", &x);
	printf("Digite um expoente n: ");
	scanf("%d", &n);

	res = x * (2 << (n-1));

	printf("O resultado é: %d\n", res);
	return 0;
}
