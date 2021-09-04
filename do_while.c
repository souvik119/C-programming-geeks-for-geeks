#include<stdio.h>
// do while loop executes atleast once because condition is checked at exit
int main(void){

    //program to maintain arunning average of scores
    float totalScore = 0;
    float scoreEntered = 0;
    float number0fTests = 0; //float just to make calculation more accurate eveything else is float
    float average = 0;

    do{
        printf("Tests: %.0f Average: %.2f \n", number0fTests, average);
        printf("Enter test score (0 to exit) : ");
        scanf("%f", &scoreEntered);
        number0fTests++;
        totalScore += scoreEntered;
        average = totalScore / number0fTests;
    }while (scoreEntered != 0);

    return 0;
}