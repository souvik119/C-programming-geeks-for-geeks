#include<stdio.h>
#include<stdlib.h>

//heap is extra memory we can borrow when program running
//heap is left over memory we can borrow

int main(void){
    int * points; //integer pointer
    
    //integer pointer typecasting
    //malloc gets memory from heap, in this case for 5 integers
    points = (int *) malloc(5 * sizeof(int));

    //once we are done with the memory give it back
    free(points);
    return 0;
}