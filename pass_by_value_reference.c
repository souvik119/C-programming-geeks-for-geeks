#include<stdio.h>
#include<stdlib.h>

void passByValue(int i);
void passByReference(int *i);

int main(void){
    int tuna = 20;
    passByValue(tuna);
    printf("Passing by value, tuna is now %d\n", tuna);

    passByReference(&tuna); //since its is a pointer so we assign it address
    printf("Passing by address, tuna is now %d\n", tuna);
    return 0;
}

void passByValue(int i){ //dont actually pass the variable, pass just the value so y=tuna remains 20
    i = 99;
    return;
}

void passByReference(int *i){
    *i = 64;
    return;
}