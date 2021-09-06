#include<stdio.h>

int main(void){

    int num;

    //continue will skip only the execution for that particular repitition and not exit out of loop
    for(num=1; num<=10; num++){
        if(num==6 || num==8){
            continue;
        }
        printf("number id %d\n", num);
    }
    return 0;
}