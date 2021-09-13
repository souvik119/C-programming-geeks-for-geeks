#include<stdio.h>

int main(void){
    int i; //for loop
    int numbers[5] = {1, 2, 3, 4, 5};

    printf("Element\tAddress\tValue\n");
    for(i=0; i<5; i++){
        printf("numbers[%d]\t%p\t%d\n", i, &numbers[i], numbers[i]);
    }

    //array names are actually pointers to first element , no need for & sign
    printf("numbers points to : %p\n", numbers);

    //dereferecing the array pointer
    printf("Value of first element of numbers is : %d\n", *numbers);
    printf("Value of third element of numbers is : %d\n", *(numbers+2));
    return 0;
}