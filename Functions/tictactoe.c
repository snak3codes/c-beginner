#include <stdio.h>
#include <stdlib.h>

// Function Prototypes
int checkForWin();
void displayBoard();
void markBoard(char mark);

// Global variables
char square[10] = { 'o', '1', '2', '3', '4', '5', '6', '7', '8', '9' };
int choice, player;

/**
 * @brief Entry point of the program.
 * 
 * @return int 
 */
int main()
// main function
{
    return 0;
}

/**
 * @brief Checks if a player has won.
 * 
 * @return int
 * 1 FOR GAME IS OVER WITH RESULT
 * -1 FOR GAME IN PROGRESS
 * O GAME IS OVER AND NO RESULT
 */
int checkForWin()
{
    int returnValue = 0;
    if (square[1] == square[2] && square[2] == square[3]) { // match in 1st row
        returnValue = 1;
    }
    // Lots of other checks here //TODO: Finish all the checks
    return returnValue;
}