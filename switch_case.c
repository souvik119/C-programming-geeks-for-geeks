#include<stdio.h>

int main(void){
    char grade;

    printf("Enter your grade (A|B|C|D|F) :\n");
    scanf(" %c", &grade);

    switch (grade)
    {
        case 'A' :  printf("Great Job!");
                    break;
        case 'B' :  printf("Try harder!");
                    break;
        case 'C' :  printf("I c you did not study!");
                    break;
        case 'D' :  printf("you love the D!");
                    break;  
        case 'F' :  printf("that is embarrasing");
                    break;          
        default  :  printf("Thats not even a grade");
    }
    
    return 0;
}