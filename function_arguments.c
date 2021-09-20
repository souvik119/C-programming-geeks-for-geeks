#include<stdio.h>
#include<stdlib.h>

void convertToDollars(float euro);

int main(void){
    float euroPrice1 = 1.00;
    float euroPrice2 = 5.50;
    convertToDollars(euroPrice1);
    convertToDollars(euroPrice2);
    convertToDollars(21.40);
    return 0;
}

void convertToDollars(float euro){
    float usd = euro * 1.37;
    printf("%.2f Euros - %.2f USD\n", euro, usd);
    return;
}