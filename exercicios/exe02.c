/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   
   float height, idealWeight;
   char gender;
   
   printf("Digite sua altura: ");
   scanf("%f", &height);
   printf("Digite seu sexo (M/F): ");
   scanf(" %c", &gender);
   
  
   if(gender == 'M'){
       idealWeight = 72.7 * height  - 58;
   }else{
       idealWeight = 62.1 * height  - 44.7;
   }
   
    printf("O peso ideal é: %.2f", idealWeight);
   
    return 0;
}
