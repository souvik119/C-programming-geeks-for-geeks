#include<stdio.h>
#include<stdlib.h>
#include "struct_header.h"

int main(void){
    //structure is a template that can used over and over again 
    //array cannot be used the same way because it can store only 1 type of data
    //structure is a way to group bunch of data types together, dont need to be same type
    //common practice to create structure in a separate header file
    struct user souvik;
    souvik.userID = 11;
    souvik.age = 29;
    souvik.weight = 70.9;
    printf("Enter first name \n");
    scanf(" %s", &souvik.firstName);
    printf("Enter last name \n");
    scanf(" %s", &souvik.lastName);

    printf("Member values for souvik are: \n");
    printf(" %d\n", souvik.userID);
    printf(" %d\n", souvik.age);
    printf(" %f\n", souvik.weight);
    printf(" %s\n", souvik.firstName);
    printf(" %s\n", souvik.lastName);
    return 0;
}