#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_WORD_LENGTH 50
#define MAX_TRIES 6

// Structure to store word and hint
struct WordWithHint {
    char word[MAX_WORD_LENGTH];
    char hint[MAX_WORD_LENGTH];
};

// Function declaration
void displayWord(const char guessedWord[]);

int main()
{
    // Seed random number generator
    srand(time(NULL));

    // Word list with hints
    struct WordWithHint wordList[] = {
        {"geeksforgeeks", "Computer coding"},
        {"elephant", "A large mammal with a trunk"},
        {"pizza", "A popular Italian dish"},
        {"beach", "Sandy shore by the sea"}
    };

    // Select a random word
    int wordIndex = rand() % 4;

    const char *secretWord = wordList[wordIndex].word;
    const char *hint = wordList[wordIndex].hint;

    int wordLength = strlen(secretWord);

    // Store current guessed word
    char guessedWord[MAX_WORD_LENGTH];

    // Track already guessed letters
    bool guessedLetters[26] = {false};

    // Initialize guessed word with '_'
    for (int i = 0; i < wordLength; i++) {
        guessedWord[i] = '_';
    }

    // End the string
    guessedWord[wordLength] = '\0';

    printf("=================================\n");
    printf("          WORD QUEST\n");
    printf("=================================\n");

    printf("Hint: %s\n", hint);

    int tries = 0;

    // Main game loop
    while (tries < MAX_TRIES) {

        printf("\n");
        displayWord(guessedWord);

        printf("Wrong Attempts: %d/%d\n", tries, MAX_TRIES);

        char guess;

        printf("Enter a letter: ");
        scanf(" %c", &guess);

        // Convert uppercase to lowercase
        guess = tolower(guess);

        // Validate input
        if (guess < 'a' || guess > 'z') {
            printf("Please enter a valid alphabet.\n");
            continue;
        }

        // Check duplicate guess
        if (guessedLetters[guess - 'a']) {
            printf("You've already guessed '%c'. Try again.\n", guess);
            continue;
        }

        // Mark letter as guessed
        guessedLetters[guess - 'a'] = true;

        bool found = false;

        // Search the letter in secret word
        for (int i = 0; i < wordLength; i++) {

            if (secretWord[i] == guess) {
                guessedWord[i] = guess;
                found = true;
            }
        }

        // Correct or wrong guess
        if (found) {
            printf("Good guess! '%c' is in the word.\n", guess);
        }
        else {
            printf("Sorry! '%c' is not in the word.\n", guess);
            tries++;
        }

        // Check winning condition
        if (strcmp(secretWord, guessedWord) == 0) {

            printf("\n");
            displayWord(guessedWord);

            printf("\nCongratulations! 🎉\n");
            printf("You've guessed the word: %s\n", secretWord);
            printf("Wrong Attempts: %d/%d\n", tries, MAX_TRIES);

            return 0;
        }
    }

    // Game over
    printf("\n=================================\n");
    printf("            GAME OVER\n");
    printf("=================================\n");

    printf("You've used all %d wrong attempts.\n", MAX_TRIES);
    printf("The correct word was: %s\n", secretWord);

    return 0;
}


// Function to display current guessed word
void displayWord(const char guessedWord[])
{
    printf("Word: ");

    for (int i = 0; guessedWord[i] != '\0'; i++) {
        printf("%c ", guessedWord[i]);
    }

    printf("\n");
}
