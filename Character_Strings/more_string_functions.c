#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
// main function
{
    // == Finding a substring: strchr() and strstr() ==

    // strchr
    // First argument is the string to be searched (address of a char array)
    // second argument is the character that you are looking for
    // the function will search the string starting at the beginning and return
    // a pointer to the first position in the string where the character
    // is found. * The address of this position in memory., is of type char*
    // described as the "pointer to char".

    // To store the value that's returned, you must create a variable that can store the address of a character.
    // If the character is not found, the function returns a special value NULL
    // NULL is the equivalent of 0 for a pointer and represents a pointer that does not point to anything.

    char str[] = "The quick brown fox";
    char ch = 'q';
    char* pGot_char = NULL;
    pGot_char = strchr(str, ch);
    printf("strchr: %s\n", &*pGot_char);

    char str2[] = "Every dog has his day";
    char word[] = "dog";
    char* pFound = NULL;
    pFound = strstr(str2, word);
    printf("strstr: %s\n", &*pFound);
    // == Tokenizing a string: ==
    // a token is a sequence of chars within a string that is bounded by a delimiter
    // breaking a sentece into words is called tokenizing
    // strtok()
    char str3[90] = "Hello how are you - my name is - Jaskaran";
    const char s[2] = "-";
    char* token;
    // Get the first token
    token = strtok(str3, s);
    // Walk through the remaining tokens
    while (token != NULL) {
        printf("%s\n", token);

        token = strtok(NULL, s);
    }
    // Analyzing strings
    // islower(), isupper(), isalpha(), isdigit(), etc.
    char name[] = "Jaskaran";
    // Pointer
    int Number
        = 25;
    int* pNumber = &Number;

    // Dereferencing to get the value
    printf("pNumber points to the address of the Number variable which stores %d\n", *pNumber);
    return 0;
}