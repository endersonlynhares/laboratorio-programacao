#include<stdio.h>

int getSizeString(char *);

int main(){
    char string[100];
    int size = 0;
    printf("Enter a string: ");
    scanf("%s", string);

    size = getSizeString(string);

    printf("Content length of string is: %d", size);

    return 0;
}

int getSizeString(char *string){
    int i = 0;
    while(*(string + i) != '\0'){
        i++;
    }

    return i;
}