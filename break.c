#include<stdio.h>

int main(void){

    int a;
    int howMany;
    int maxAmount = 10;

    printf("How many times do you want to loop (max 10) \n");
    scanf(" %d", &howMany);

    for(a=1; a<=maxAmount; a++){
        printf("%d\n", a);

        //break statement will break out of the for loop if the condition is met
        if(a==howMany){
            break;
        }
    }
    return 0;
}