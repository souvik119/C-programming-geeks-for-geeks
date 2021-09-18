#include<stdio.h>
#include<stdlib.h>
// 2 types of file access - sequential and random access
//sequential - only read and write information sequentially, starting from the beginning of the file
//random - enables you to read or writeinformation anywhere in the file
int main(void){
    //file pointer indicates where we are in the file
    FILE * fPointer;
    fPointer = fopen("souvik.txt", "w"); //open the file in write mode
    //fprintf prints to a file
    fprintf(fPointer, "I love myself\n");
    //close file at the end, to free up any memory associated with it
    fclose(fPointer);
    return 0;
}