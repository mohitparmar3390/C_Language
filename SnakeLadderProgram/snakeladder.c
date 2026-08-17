// C Program use Snake and Ladder Program used Header files Include
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to roll a six-sided die ... 1 2 3 4 5 6
int rollDie() { return rand() % 6 + 1; }

// global variables store postions of player1 and player2
int player1 = 0, player2 = 0;

//function movePlayer 
int movePlayer(int currentPlayer, int roll)
{
    int newPosition = currentPlayer + roll;
    // Define the positions of snakes and ladders on the board.
    int snakesAndLadders[101];

    for (int i = 0; i <= 100; i++) {
        snakesAndLadders[i] = 0;
    }
  
      // here positive weights represent a ladder
      // and negative weights represent a snake.
    snakesAndLadders[6] = 40;
    snakesAndLadders[23] = -10;
    snakesAndLadders[45] = -7;
    snakesAndLadders[61] = -18;
    snakesAndLadders[65] = -8;
    snakesAndLadders[77] = 5;
    snakesAndLadders[98] = -10;

    int newSquare = newPosition + snakesAndLadders[newPosition];

    if (newSquare > 100) {
        return currentPlayer; // Player cannot move beyond
                              // square 100
    }

    return newSquare;
}



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
