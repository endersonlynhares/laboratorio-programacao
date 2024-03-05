#include<stdio.h>

int main(){
	int totalSeconds, hours, minutes, seconds;
	printf("Digite a quantidade de segundos: ");
	scanf("%d", &totalSeconds);

	hours = totalSeconds / 3600;
	minutes = (totalSeconds % 3600) / 60;
	seconds = ((totalSeconds % 3600 % 60));

	printf("HORAS: %d\n", hours);
	printf("MINUTOS: %d\n", minutes);
	printf("SEGUNDOS: %d\n", seconds);
	return 0;
}
