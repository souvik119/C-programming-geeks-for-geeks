#include<stdio.h>

int main(void){

    float avgProfit;
    int pumpmkinPrice = 10;
    int sales = 59;
    int daysWorked = 7;

    //since the int values are not typecasted result will not be accurate
    avgProfit = (pumpmkinPrice * sales) / daysWorked;
    printf("Average daily profit is %.2f\n", avgProfit);

    //typecasting the int values to float only for this calculation
    avgProfit = ((float)pumpmkinPrice * (float)sales) / (float)daysWorked;
    printf("Average daily profit is %.2f", avgProfit);

    return 0;
}