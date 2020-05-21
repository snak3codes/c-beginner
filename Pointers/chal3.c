#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// main function
int main()
{
    // == Dynamic Memory Allocation ==
    // Write a program that allows a user to input a text string, even with
    // spaces between them.

    int size; // User entered
    char* text = NULL;

    printf("Enter limit of the text: \n");
    scanf("%d", &size);

    // NOTE: If size == 1, you will get an empty string
    // REASON: String will only contain '\0'. In order to show a single char
    // It is important to set the limit to at least 1.
    text = (char*)malloc(size * sizeof(char));

    if (text) { // check is text is NULL. (Happens when malloc fails)
        printf("Enter some text: \n");
        scanf(" ");
        // gets(text); // can read multiple strings separated by spaces. unsafe!
        fgets(text, size * sizeof(char), stdin);
        // NOTE: gets will show a warning.
        /* Because it is impossible to tell without knowing the data in 
        advance how many characters gets() will read, and because gets() 
        will continue to store characters past the end of the buffer, it is 
        extremely dangerous to use. It has been used to break computer 
        security. */
        printf("Inputted text is: %s\n", text);
    }

    // Free pointer
    free(text);
    text = NULL;
    return 0;
}