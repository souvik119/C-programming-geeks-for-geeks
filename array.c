#include<stdio.h>
#include<string.h> //for strcpy function

int main(void){
    char name[13] = "Souvik Ghosh"; //extra charcater for string terminator so always add 1
    printf("My name is %s \n", name);

    //accessing element in the array
    printf("3rd character is %c \n", name[2]);

    //modifying element in the array
    name[2] = 't';
    printf("My name is %s \n", name);

    //dont need to mention array size if initialzing it while defining
    char sport[] = "Football";
    printf("My sport is %s \n", sport);

    // follwoing results in an error "redefinition of 'sport'"
    //char sport[] = "Lawn Tennis";
    //printf("My sport is %s \n", sport);

    //to change the array sport to other value
    strcpy(sport, "Table Tennis");
    printf("My sport is %s \n", sport);

    return 0;
}