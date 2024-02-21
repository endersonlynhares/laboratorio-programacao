/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   
    int hours, minutes, seconds, totalSeconds;
    
    printf("Digite as horas: ");
    scanf("%d", &hours);
    
    printf("Digite os minutes: ");
    scanf("%d", &minutes);
    
    printf("Digite os segundos: ");
    scanf("%d", &seconds);
    
    totalSeconds += hours * 60 * 60;
    totalSeconds += minutes * 60;
    totalSeconds += seconds;
    
    printf("O total em segundos é: %d", totalSeconds);
    
    return 0;
}
