#include<stdio.h>
#include<string.h>

int main(void){
    char testString[100] = "Souvik ";
    
    //strcat adds to the existing string
    strcat(testString, "loves ");
    strcat(testString, "to ");
    strcat(testString, "dance ");
    printf("%s\n", testString);

    //strcpy replaces the existing string with provided text
    strcpy(testString, "Souvik is awesome!!");
    printf("%s\n", testString);
    
    return 0;
}