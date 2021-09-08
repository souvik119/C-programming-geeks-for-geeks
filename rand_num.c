#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>
#include<time.h>

int rollDice(void){
    int firstRoll, secondRoll, thirdRoll;
    firstRoll = (rand() % 6) + 1; //rand gives 0-32,000 %6 will give 0-5 so +1
    secondRoll = (rand() % 6) + 1;
    thirdRoll = (rand() % 6) + 1;
    return firstRoll + secondRoll + thirdRoll;
}

int main(void){
    srand(time(NULL)); //to make rand truly random
    printf("Welcome to dice game\n");
    
    printf("Rolling 3 dices first time\n");
    int sum1 = rollDice();
    printf("Sum is %d\n", sum1);
    
    printf("Guess if 2nd roll will be lower/higher/same (l/h/s)\n");
    char userGuess;
    scanf(" %c",&userGuess);
    userGuess = tolower(userGuess);
    
    printf("Rolling 3 dices second time\n");
    int sum2 = rollDice();
    printf("Sum is %d\n", sum2);
    
    if(sum2 > sum1 && userGuess=='h'){
        printf("Correct guess!!");
    }else if(sum2 < sum1 && userGuess=='l'){
        printf("Correct guess!!");
    }else if(sum2 == sum1 && userGuess=='s'){
        printf("Correct guess!!");
    }else{
        printf("Incorrect Guess!!");
    }
    return 0;
}