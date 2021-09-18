#include<stdlib.h>
#include<stdio.h>

int main(){
    FILE * fPointer;
    fPointer = fopen("souvik.txt", "w+");//+ means after writing we can read it
    fputs("I ate 3 pumpkins today", fPointer);

    fseek(fPointer, 8, SEEK_SET); //move to 8 charcaters from start of file
    fputs("munchkins on Friday", fPointer);

    fseek(fPointer, -6, SEEK_END); //move to 6 charcaters from end of file
    fputs("top of a mountain", fPointer);
    
    fclose(fPointer);
    return 0;
}