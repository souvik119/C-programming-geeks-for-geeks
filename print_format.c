// This exercise will demonstrate the print formatting in C
#include <stdio.h>

int main(void){
    //this will print 3.141593 as %f rounds to 6 places after .
    printf("Value of pi is %f\n", 3.1415926535);
    
    // we can change the format of foating as follows for 2 numbers after .
    printf("Value of pi is %.2f\n", 3.1415926535);

    // we can change the format of foating as follows for 8 numbers after .
    printf("Value of pi is %.8f\n", 3.1415926535);

    // we can specify the field width, default is right justified
    printf("Hello there this is %10s\n", "Souvik");

    // we can specify the field width, for left justified use -
    printf("Hello there %-10s here", "Souvik");
    
    return 0;
}