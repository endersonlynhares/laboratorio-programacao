#include<stdio.h>
#include<stdbool.h>

bool findAChar(char *, char);

int main(){
    char string[100], letter;
    printf("Enter a string: ");
    scanf("%s%*c", string);

    printf("Enter a char that you find in a string: ");
    scanf("%c%*c", &letter);  

    if(findAChar(string, letter)){
        printf("Letter '%c' in '%s'", letter, string);
    }else{
        printf("Letter '%c' NOT in '%s'", letter, string);
    }

    return 0;
}

bool findAChar(char *string, char letter){
    int i = 0;
    while(*(string + i) != '\0'){
        if(*(string + i) == letter){
            return true;
        }
        i++;
    }

    return false;
}