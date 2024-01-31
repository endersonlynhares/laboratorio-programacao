#include<stdio.h>

int main(){

    float metros, dm, cm, mm;
    printf("Digite a quantidade em metros: ");
    scanf("%f", &metros);

    dm = metros * 10;
    cm = metros * 100;
    mm = metros * 1000;

    printf("%.2f metros é %.2f decimetros\n", metros, dm);
    printf("%.2f metros é %.2f centimetros\n", metros, cm);
    printf("%.2f metros é %.2f milimetros\n", metros, mm);
    
    return 0;
}