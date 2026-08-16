// C Program use Snake and Ladder Program used Header files Include
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to roll a six-sided die ... 1 2 3 4 5 6
int rollDie() { return rand() % 6 + 1; }

// global variables store postions of player1 and player2
int player1 = 0, player2 = 0;


int main()
{
    srand(time(0)); 
    int currentPlayer = 1;
    int won = 0;
    printf("Snake and Ladder Game\n");

    while (!won) {
    }

    return 0;
}
