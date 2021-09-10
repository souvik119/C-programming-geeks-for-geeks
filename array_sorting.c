#include<stdio.h>
#include<stdlib.h>

//no built in function to sort so have to create our own
int main(void){
    int i, temp, sorted;
    int goals[10];

    for(i=0; i<10; i++){
        goals[i] = (rand() % 25) + 1; //random number from 1 - 25
    }
    printf("Original list : ");
    for(i=0; i<10; i++){
        printf(" %d\t", goals[i]);
    }

    //sorting this list of numbers in ascending order
    while(1){ //another way for saying while True
        sorted = 0; //setting this to 0 whenever elements are swapped if this is set to 1 means list sorted
        for (i=0; i<10-1; i++){ //here 10-1 because no element to compare the last element to
            if(goals[i] > goals[i+1]){
                temp = goals[i]; //swapping i with i+1th element
                goals[i] = goals[i+1];
                goals[i+1] = temp;
                sorted = 1;
            }
        }
        if(sorted == 0){
            break; //list is sorted break out of while loop
        }
    }
    printf("\nSorted list : ");
    for(i=0; i<10; i++){
        printf(" %d\t", goals[i]);
    }
    return 0;
}