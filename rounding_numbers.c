#include<stdio.h>
#include<math.h> // for floor and ceil functions

int main(void){
    float num1 = 9.65342;
    float num2 = 3.3;

    //floor rounds down a number
    printf("Floor of %f is %.2f\n", num1, floor(num1));
    printf("Floor of %f is %.2f\n", num2, floor(num2));

    //ceil rounds up a number
    printf("Ceil of %f is %.2f\n", num1, ceil(num1));
    printf("Ceil of %f is %.2f\n", num2, ceil(num2));
    
    return 0;
}