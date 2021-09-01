#include<stdio.h>

int main(void){
    char fname[20]; //defining an array for first name
    char wifefname[20]; //defining an array for wife first name
    int noOfBabies;

    //any spaces in the input will be considered the next input so no spaces
    printf("What is your name?\n");
    scanf("%s", fname);

    printf("What is your wife's name?\n");
    scanf("%s", wifefname);

    printf("Number of babies?\n");
    scanf("%d", &noOfBabies); // always use & for integer, char, float etc anything other than arrays

    printf("%s and %s are in love and want to have %d babies", fname, wifefname, noOfBabies);

    return 0;
}