#include<stdio.h>
#include<stdlib.h>

int main(void){
    FILE * fPointer;
    fPointer = fopen("souvik.txt", "a");
    fprintf(fPointer, "\n This new line from append");
    fclose(fPointer);
    return 0;
}