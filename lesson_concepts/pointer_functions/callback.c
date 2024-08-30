#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool freeze_c(int temperature){
    if (temperature < 0) return true;
    else return false;
}

bool freeze_f(int temperature){
    if(temperature <= 32) return true;
    else return false;
}

void is_freezing(bool (*freeze_check)(int)){
    int temperature;
    printf("Enter a temperature: ");
    scanf("%d", &temperature);

    if(freeze_check(temperature)) {
        printf("It's freezing!\n");
    } else {
        printf("It's NOT freezing!");
    }
}

typedef bool (*Func)();

int main(int argc, char **argv){

    if(argc != 2){
        printf("Formato: \n\t %s <0: celsius | 1: fahrenheit >", *argv);
        exit(1);
    }

    Func functionFreeze[] = {freeze_c, freeze_f};
    int typeTemp = atoi(*(argv + 1));
    is_freezing(functionFreeze[typeTemp]);

    return 0;
}