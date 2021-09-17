#include<stdio.h>
#include<stdlib.h>

int main(void){
    int i, howMany; //i for looping, howMany for getting user input
    int total = 0;
    float avg = 0.0;
    int * pointsArray; //pointer to heap memory

    printf("How many numbers do you want to average?\n");
    scanf(" %d", &howMany);
    //integer pointer typecasting and creating space for user entered number of ints
    pointsArray = (int *) malloc(howMany * sizeof(int));

    printf("Enter the numbers!\n");
    for(i=0; i<howMany; i++){
        scanf(" %d", pointsArray[i]);
        total += pointsArray[i];
    }

    avg = (float)total / (float)howMany; //typecasting for better accuracy
    printf("Average is %.2f", avg);
    free(pointsArray);
    return 0;
}