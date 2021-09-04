#include<stdio.h>

/* int main(void){
    //for loop should be used where we know how many repititions are expected
    int i;
    for(i=0; i<=100; i+=8){
        printf("i is %d \n", i);
    }
    return 0;
} */

//crating a matrix using for loop
int main(void){

    int rows;
    int columns;
    for(rows=1; rows<=6; rows++){
        for(columns=1; columns<=4; columns++){
            printf("%d ", columns);
        }
        printf("\n");
    }

    return 0;
}