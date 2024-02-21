#include <stdio.h>

int main()
{
   
   int number, factorDiv = 100, factorMult = 1, newNumber = 0;
   
   printf("Digite um valor: ");
   scanf("%d", &number);
   
 
   while(factorDiv > 0){
       int value = number / factorDiv;
       number %= factorDiv;
       printf("%d", value);
       newNumber += value * factorMult;
       
      factorDiv /= 10;
      factorMult *= 10;
   }
   
  printf("O valor invertido é: %d\n", newNumber);
   
  
    return 0;
}
