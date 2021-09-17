#include<stdio.h>

int main(){
    char movie1[] = "The Return of Souvik";
    //name of array i.e. movie1 is constant cant re assign to something else
    //hard to change character arrays defined above

    //pointer to a string works better, just stores the starting address
    char * movie2 = "The Return of Sayali";
    puts(movie2); 
    movie2 = "The return of madrid";
    puts(movie2);
    return 0;
}