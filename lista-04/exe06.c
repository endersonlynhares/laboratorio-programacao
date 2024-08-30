#include<stdio.h>

void strCopy(char *, char *);

int main(){
    char string1[] = "Enderson";
    char string2[100];

    printf("Value of string 01: %s\n", string1);
    printf("Value of string 02: %s\n---\t AFTER COPY \t---\n", string2);
    strCopy(string1, string2);
    printf("Value of string 01: %s\n", string1);
    printf("Value of string 02: %s\n", string2);

    return 0;
}

void strCopy(char *string1, char *string2){
    for(; *string2 = *string1; string1++, string2++);
}