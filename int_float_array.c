#include<stdio.h>

int main(void){
    //one major difference between char and int/float array is no null char at the end
    /* int i;
    int numbers[4] = {7, 9, 34, 21};//initializing the array

    for(i=0; i<4; i++){
        printf("Element %d: %d\n", i, numbers[i]);
    } */

    //initializing array with a loop
    int i;
    int chocolateQuantity[5];
    int total = 0;

    for(i=0; i<5; i++){
        printf("How many chocolates did you eat on day %d\n", i+1);//since i starts from 0
        scanf(" %d", &chocolateQuantity[i]);
    }

    for(i=0; i<5; i++){
        total += chocolateQuantity[i];
    }

    int avg = total / 5;
    printf("You ate total %d chocolates, that is %d per day on average\n", total, avg);
    return 0;
}