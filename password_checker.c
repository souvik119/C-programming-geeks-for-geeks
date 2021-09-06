#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main(void){
    printf("Password Rules\n");
    printf("1) Should be 6 characters or more\n");
    printf("2) Should contain atleast 1 uppercase letter\n");
    printf("3) Should contain atleast 1 number\n");
    printf("4) Should contain atleast 1 symbol\n");

    char correctPassword = 'n';
    char password[20];
    int upperCount = 0, numCount = 0, symbolCount = 0, i;
    do{
        printf("Enter Password : \n");
        scanf(" %s", password);
        if(strlen(password) < 6){
            continue;
        }
        for(i=0; i<strlen(password); i++){
            if(isupper(password[i])){
                upperCount += 1;
            } else if(isdigit(password[i])){
                numCount += 1;
            }else if(!isalnum(password[i])){
               symbolCount += 1;
            }
        }
        if((upperCount != 0) && (numCount != 0) && (symbolCount != 0)){
            printf("Password meets all criteria");
            correctPassword = 'y';
        }
    }while(correctPassword != 'y');
    return 0;
}