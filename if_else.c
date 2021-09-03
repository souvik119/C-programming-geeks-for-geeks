//basic usage of decision making in C
#include<stdio.h>

int main(void){
    int age;
    char gender;

    printf("What is your gender(m/f): \n");
    scanf(" %c", &gender);

    printf("What is your age: \n");
    scanf(" %d", &age);

    if (age >= 18){
        printf("You may enter this website ");
        if (gender == 'm'){
            printf("dude");
        }else{
            printf("m'lady");
        }
    }else{
        printf("Nothing to see here!");
    }

    return 0;
}