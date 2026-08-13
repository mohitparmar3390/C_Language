#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to decide the winner
int game(char you, char computer)
{
    // Same choice = Draw
    if (you == computer)
        return -1;

    // Stone vs Paper
    if (you == 's' && computer == 'p')
        return 0;

    if (you == 'p' && computer == 's')
        return 1;

    // Stone vs Scissor
    if (you == 's' && computer == 'z')
        return 1;

    if (you == 'z' && computer == 's')
        return 0;

    // Paper vs Scissor
    if (you == 'p' && computer == 'z')
        return 0;

    if (you == 'z' && computer == 'p')
        return 1;

    return -1;
}

int main()
{
    char you, computer;
    char playAgain;

    int result;

    int userScore = 0;
    int computerScore = 0;
    int draw = 0;

    int countWrongInput = 0;
    int countWrongPlayAgain = 0;

    // Random number generator start
    srand(time(NULL));

    printf("============================================\n");
    printf("        STONE - PAPER - SCISSOR GAME\n");
    printf("============================================\n");

    printf("\nGame Rules:\n");
    printf("s = Stone\n");
    printf("p = Paper\n");
    printf("z = Scissor\n");

    printf("\n First player to reach 10 wins = Game Winner!\n");
    printf(" If 50 draws happen = Game Over!\n");

    // Infinite game loop
    while (1)
    {
        printf("\n--------------------------------------------\n");

        // Computer choice
        int n = rand() % 3;

        if (n == 0)
            computer = 's';
        else if (n == 1)
            computer = 'p';
        else
            computer = 'z';

        // Reset wrong input count for new round
        countWrongInput = 0;

        // User input
        while (1)
        {
            printf("\nApni choice dalo (s/p/z): ");
            scanf(" %c", &you);

            // Convert uppercase to lowercase
            if (you == 'S')
                you = 's';
            else if (you == 'P')
                you = 'p';
            else if (you == 'Z')
                you = 'z';

            // Check valid input
            if (you == 's' || you == 'p' || you == 'z')
            {
                break;
            }

            countWrongInput++;

            printf("\nInvalid choice! \n");
            printf("Please sirf s, p ya z character type karo.\n");
            printf("Wrong attempts: %d/3\n", countWrongInput);

            // 3 wrong attempts
            if (countWrongInput >= 3)
            {
                printf("\n Too many invalid attempts!\n");
                printf("Aapne 3 baar wrong input enter kiya hai.\n");
                printf("Game ab exit ho raha hai. \n");

                printf("\n============================================\n");
                printf("          THANK YOU FOR PLAYING!\n");
                printf("============================================\n");

                return 0;
            }
        }

        // Decide winner
        result = game(you, computer);

        // Show choices
        printf("\nYou choose      : %c", you);
        printf("\nComputer choose : %c\n", computer);

        // Show result
        if (result == -1)
        {
            printf("\n Game Draw!\n");
            draw++;
        }
        else if (result == 1)
        {
            printf("\n Wow! You won this round!\n");
            userScore++;
        }
        else
        {
            printf("\n Oh! Computer won this round!\n");
            computerScore++;
        }

        // Current score
        printf("\n========== SCORE ==========\n");
        printf("You      : %d / 10\n", userScore);
        printf("Computer : %d / 10\n", computerScore);
        printf("Draw     : %d / 50\n", draw);
        printf("===========================\n");

        // ==========================================
        // CHECK WINNER - FIRST TO 10 WINS
        // ==========================================

        if (userScore >= 10)
        {
            printf("\n============================================\n");
            printf("           GAME WINNER \n");
            printf("============================================\n");

            printf("\n CONGRATULATIONS! \n");
            printf("You reached 10 wins first!\n");
            printf(" WOW! You are the WINNER!\n");

            printf("\nFinal Score:\n");
            printf("You      : %d\n", userScore);
            printf("Computer : %d\n", computerScore);
            printf("Draw     : %d\n", draw);

            printf("\nThank you for playing! \n");
            printf("Game exited successfully. \n");
            printf("============================================\n");

            return 0;
        }

        if (computerScore >= 10)
        {
            printf("\n============================================\n");
            printf("         COMPUTER IS THE WINNER \n");
            printf("============================================\n");

            printf("\n Oh! Computer reached 10 wins first.\n");
            printf("Better luck next time! \n");

            printf("\nFinal Score:\n");
            printf("You      : %d\n", userScore);
            printf("Computer : %d\n", computerScore);
            printf("Draw     : %d\n", draw);

            printf("\nThank you for playing! \n");
            printf("Game exited successfully. \n");
            printf("============================================\n");

            return 0;
        }

        // ==========================================
        // CHECK DRAW LIMIT - 50 DRAWS
        // ==========================================

        if (draw >= 50)
        {
            printf("\n============================================\n");
            printf("           50 DRAWS REACHED! \n");
            printf("============================================\n");

            printf("\n Aaj winner decide nahi ho paya.\n");
            printf("50 games draw ho gaye!\n");
            printf("Next time try again! \n");

            printf("\nFinal Score:\n");
            printf("You      : %d\n", userScore);
            printf("Computer : %d\n", computerScore);
            printf("Draw     : %d\n", draw);

            printf("\nThank you for playing! \n");
            printf("Game exited successfully. \n");
            printf("============================================\n");

            return 0;
        }

        // Reset play-again wrong input count
        countWrongPlayAgain = 0;

        // Ask user whether to continue
        while (1)
        {
            printf("\nKya aap dobara game khelna chahte ho? (y/n): ");
            scanf(" %c", &playAgain);

            // Convert uppercase to lowercase
            if (playAgain == 'Y')
                playAgain = 'y';
            else if (playAgain == 'N')
                playAgain = 'n';

            // Valid input
            if (playAgain == 'y' || playAgain == 'n')
            {
                break;
            }

            countWrongPlayAgain++;

            printf("\n Invalid character!\n");
            printf("Please sirf y ya n character type karo.\n");
            printf("Wrong attempts: %d/3\n", countWrongPlayAgain);

            // 3 wrong attempts
            if (countWrongPlayAgain >= 3)
            {
                printf("\n Too many invalid attempts!\n");
                printf("Aapne y/n ke liye 3 baar wrong character enter kiya hai.\n");

                printf("\n============================================\n");
                printf("          THANK YOU FOR PLAYING!\n");
                printf("============================================\n");

                printf("\nFinal Score:\n");
                printf("You      : %d\n", userScore);
                printf("Computer : %d\n", computerScore);
                printf("Draw     : %d\n", draw);

                printf("\nGame exited successfully. \n");
                printf("============================================\n");

                return 0;
            }
        }

        // User wants to exit
        if (playAgain == 'n')
        {
            printf("\n============================================\n");
            printf("          FINAL SCORE\n");
            printf("============================================\n");

            printf("You      : %d\n", userScore);
            printf("Computer : %d\n", computerScore);
            printf("Draw     : %d\n", draw);

            printf("\nThank you for playing! \n");
            printf("Game exited successfully.\n");
            printf("============================================\n");

            break;
        }

        // If playAgain == 'y'
        // Game automatically starts again
    }

    return 0;
}
