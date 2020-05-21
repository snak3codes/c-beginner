#include <stdio.h>
#include <stdlib.h>

int main()
// main function
{
    char word[] = { "Hello" };
    char word2[] = "World";
    /*  The printf() function assumes when it encounters the %s format characters
    that the corresponding argument is a character string that is terminated
    by a null-character (\0)*/
    printf("%s\n%s", word, word2);
    /* You cannot directly test two strings to see if they are equal with a statement
    Use strcompare(). */
    /* Reminder: "X" != 'X'
    "X" is an array of characters. it has both X and \0 */
    return 0;
}