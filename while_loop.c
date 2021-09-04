#include<stdio.h>

int main(void){
    int day = 1;
    float amount = 0.01;
    //each day amount doubles so print values for 31 days
    while (day <= 31){
        printf("Day: %d \t Amount: %.2f \n", day, amount);
        day++;
        amount *= 2;
    }
    return 0;
}