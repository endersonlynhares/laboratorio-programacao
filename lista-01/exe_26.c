#include<stdio.h>
#include<math.h>

int main(){
	float x1, y1, x2, y2, distancia;
	printf("Digite o valor das abcissas no primeiro ponto: ");
	scanf("%f", &x1);
	printf("Digite o valor das coordenadas no primeiro ponto: ");
	scanf("%f", &y1);
	printf("Digite o valor das abcissas no segundo ponto: ");
	scanf("%f", &x2);
	printf("Digite o valor das coordenadas no segundo ponto: ");
	scanf("%f", &y2);
	
	distancia = sqrt(pow((x2 - x1), 2) + pow(y2 - y1, 2));
	printf("A distância é: %.2f\n", distancia);
	return 0;
}
