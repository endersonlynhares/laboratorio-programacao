#include <stdio.h>

int main()
{
   
   unsigned char code, stateBit, newCode = 0;
   int position;
   
  printf("Digite um codigo: ");
  scanf("%hhu", &code);
   
   printf("Digite uma posição: ");
   scanf("%d", &position);
   
   // POSITION = 2
   
   // -----CASE 1------
   // CODE  =  0000 1010
   // MASK1 =  0000 0010
   // RES   =  0000 1000


   position -= 1;
   stateBit = (code >> (position)) & 1;
   newCode = code ^ (1 << position);
   
   printf("O estado do bit na posição %d é: %d\n", position+1, stateBit);
   
   printf("%d\n", code);
   printf("%d\n", newCode);
   
  
    return 0;
}
