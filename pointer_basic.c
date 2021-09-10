#include<stdio.h>

int main(void){
    int souvik = 29;
    printf("Address\tName\tValue\n");
    printf("%p\t%s\t%d\n", &souvik, "souvik", souvik);
    int *sayali = &souvik; //pointer to address of souvik
    printf("%p\t%s\t%p\n", &sayali, "sayali", sayali);
    return 0;
}