#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void){
    int year1;
    int year2;

    printf("Enter first year : \n");
    scanf(" %d", &year1);

    printf("Enter second year : \n");
    scanf(" %d", &year2);

    printf("Difference is : %d\n", year1 - year2);
    //use abs if not sure about the number if positive and you pnly care about the magnitude
    printf("Absolute difference is : %d\n", abs(year1 - year2));
    
    return 0;
}