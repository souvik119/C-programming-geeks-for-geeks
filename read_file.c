#include<stdio.h>
#include<stdlib.h>

int main(void){
    FILE * fPointer;
    fPointer = fopen("souvik.txt", "r");
    char singleLine[150]; //char array for printing single line

    while(!feof(fPointer)){ //continue to eof charcater at end of file
        fgets(singleLine, 150, fPointer); //gets single line from file
        puts(singleLine);//extra space is because puts already adds \n character
    }
    fclose(fPointer);
    return 0;
}