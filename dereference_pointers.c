#include<stdio.h>

int main(void){
    int Souvik = 20;
    int *pSouvik = &Souvik; // pointer pSouvik to Souvik
    printf("Address\tName\tValue\n");
    printf("%p\t%s\t%d\n", &Souvik, "Souvik", Souvik);
    printf("%p\t%s\t%p\n", &pSouvik, "pSouvik", pSouvik);

    //*pSouvik is a way of dereferencing pointer pSouvik to get value of Souvik variable
    printf("*pSouvik value : %d\n", *pSouvik);
    //can also change value of original variable using dereference pointer
    *pSouvik = 60;
    printf("*pSouvik value : %d\n", *pSouvik);
    printf("Souvik value : %d\n", Souvik);
    return 0;
}