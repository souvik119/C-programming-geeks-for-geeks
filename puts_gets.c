#include<stdio.h>
#include<string.h>

int main(void){
    char catName[50];
    char catFood[25];
    char sentence[75] = "";

    //puts is similar to printf but adds newline character at the end by default
    puts("Enter the cat's name :"); 
    //gets is similar to scanf but accepts spaces in between input as well
    gets(catName);

    puts("What does the cat eat :");
    gets(catFood);

    strcat(sentence, catName);
    strcat(sentence, " loves to eat ");
    strcat(sentence, catFood);
    puts(sentence);
    return 0;
}