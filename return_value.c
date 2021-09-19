#include<stdio.h>
#include<stdlib.h>

int calculateBonus(int yearsWorked);

int main(void){
    int souvikBonus = calculateBonus(15);
    printf("Souvik gets $%d\n", souvikBonus);
    printf("Sayali gets $%d\n", calculateBonus(5));
    return 0;
}

int calculateBonus(int yearsWorked){
    int bonus = yearsWorked * 250;
    if(yearsWorked > 10){
        bonus += 1000;
    }
    return bonus;
}