#include<stdio.h>

int main(void){
    int i;
    int players[5] = {58, 66, 68, 71, 87}; //players by their jersey numbers
    int goals[5] = {26, 39, 25,29, 31};
    int gamesPlayed[5] = {30, 30, 28, 30, 26};
    float ppg[5];
    float bestPPG = 0.0;
    int bestPlayer;

    for(i=0; i<5; i++){
        ppg[i] = (float)goals[i] / (float)gamesPlayed[i]; //typecasting
        printf("%d \t %d \t %d \t %.2f \n", players[i], goals[i], gamesPlayed[i], ppg[i]);

        if(ppg[i] > bestPPG){
            bestPPG = ppg[i]; //tracking the best player by comparing ppg of each player
            bestPlayer = players[i]; //initially bestPPG is set to 0.0
        }
    }
    printf("The best player is %d", bestPlayer);
    return 0;
}