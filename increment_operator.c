#include<stdio.h>

int main(){
    //increment the value and then perform operation
    int a = 5, b=10, answer = 0;
    answer = ++a * b;
    printf("Answer is %d\n", answer);

    //execute the operation then increment the value
    a = 5, b=10, answer = 0;
    answer = a++ * b;
    printf("Answer is %d\n", answer);

    return 0;
}