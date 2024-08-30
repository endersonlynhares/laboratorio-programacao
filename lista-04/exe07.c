#include<stdio.h>

void joinStr(char *, char *, char *);

int main(){
    char fisrt_name[] = "Enderson";
    char last_name[] = "Linhares";
    char joined_str[100];

    joinStr(fisrt_name, last_name, joined_str);

    printf("A string concatenada: %s", joined_str);

    return 0;
}

int getSizeString(char *string){
    int i = 0;
    while(*(string + i) != '\0'){
        i++;
    }

    return i;
}

void joinStr(char *string_1, char *string_2, char *joined_string){
    int i = 0;
    int size_string_1 = getSizeString(string_1);
    while(*(string_1 + i) != '\0'){
        *(joined_string + i) = *(string_1 + i);
        i++;
    }

    *(joined_string + i) = ' ';
    i++;

    int k = 0;
    while(*(string_2 + k) != '\0'){
        *(joined_string + i) = *(string_2 + k);
        k++;
        i++;
    }
    *(joined_string + i) = '\0';
    
}