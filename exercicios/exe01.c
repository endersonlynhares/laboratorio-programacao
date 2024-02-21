/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float value, totalValue;
    
    printf("Digite um valor: ");
    scanf("%f", &value);
    
    totalValue = value + (value * (10 / (float) 100));
    printf("O valor total é: %.2f", totalValue);
    
    return 0;
}
