/* Variable is a storage place with some memory allocated to it */
/* It can be used to store some data
* type variable_name;
* type variable1_name, variable2_name, variable3_name; for multiple variables
* A variable name can consist of alphabets (both upper and lower case), 
* numbers and the underscore ‘_’ character. However, the name must not start with a number. */

/* Variable declaration and definition :
* declaration refers to when it is first introduced before first use
* definition is the part where the variable is assigned a memory location and a value
* Most of the times, variable declaration and definition are done together. */

#include <stdio.h>
/* int main(void){
    //declaration and definition of variable a123
    char a123 = 'a';
    
    //following is also a declaration and definition as b is allocated some memory
    //and assigned garbage value
    float b;

    //multiple declarations and definitions
    int _c, _d45, e;

    //printing a variable
    printf("%c \n", a123);

    //trying to print b which should have garbage value
    printf("%f \n", b);

    //trying to print _c, _d45, e which should have garbage value
    printf("%d %d %d \n", _c, _d45, e);

    return 0;

} */

/* Local vs Global variable:
* Local - A variable that is declared and used inside the function or block, cannot be used outside
* Global - declared at the starting of program, available to all the functions */
/* int x = 20; //global variable

int function1(void){
    printf("%d \n", x);
    return 0;
}

int function2(void){
    printf("%d \n", x);
    return 0;
}

int main(void){
    function1();
    function2();
    return 0;
} */

/* Static variables:
* variable that retains its value between multiple function calls
* defined with static keyword. By default they are assigned value 0
*/
/* 
int function1(void){
    int x = 20; //local variable
    static int y = 30; //static variable
    x = x + 10;
    y = y + 10;
    printf("%d, %d \n", x, y);
    return 0;
}

int main(void){
    // variable x retains same value as it is local but static variable y updates value with each call
    function1();
    function1();
    function1();
    return 0;
} */

/* Automatic variables:
* All variables in C that are declared inside the block, are automatic variables by default. We 
* can explicitly declare an automatic variable using auto keyword.
*/

/* External variables:
* External variable can be shared between multiple C files.
* We can declare external variable using extern keyword.*/

/* Example with all the concepts */
extern int x = 9; //declaration and initialization an extern variable

int z = 10; // global variable , default value = 0

typedef long long int LL; //using typedef to give a short name to long long int as LL

int square(int arg){
    printf("Square of %d is %d \n", arg, arg*arg);
    return 0;
}

int main(void){
    const int a = 32;
    char b = 'G';
    extern int z; // extern variable z defined elsewhere
    LL c = 1000000; //using typedef for long long int

    //printing above variables
    printf("value of a is : %d \n", a);
    printf("value of b is : %c \n", b);
    printf("value of c is : %lld \n", c);
    printf("value of x is : %d \n", x);
    printf("value of z is : %d \n", z);

    // value of extern variable x modified
    x=2;
 
    // value of extern variable z modified
    z=5;

    printf("These are the modified values of the extern variables"
    " 'x' and 'z' respectively: %d and %d\n",x,z);

    while (x > 0)
    {
        static int y = 5;
        y++;
        // printing value at each iteration
        printf("The value of y is %d\n",y);
        x--;
    }

    // print square of 5
    square(5);

    return 0;
}

