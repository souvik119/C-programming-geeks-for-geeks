#include<stdio.h>
#include<stdlib.h>

void printSomething(); //prototyping above main to find definition while executing

int main(void){
    printSomething();
    printSomething(); //useful features of function is implement once repeat many times
    printSomething();
    return 0;
}

void printSomething(){
    printf("I am a fucntion\n");
    return; //even though it is not returning enything this statement needed at end of each fucntion
}