#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
// main function
{
    char buff[100];
    int nLetters = 0;
    int nDigits = 0;
    int nPunct = 0;

    printf("Enter string of less than %d characters without whitespaces: \n", 100);
    scanf("%s", buff);

    int i = 0;
    while (buff[i]) {
        if (isalpha(buff[i]))
            nLetters++;
        else if (isdigit(buff[i]))
            nDigits++;
        else if (ispunct(buff[i]))
            nPunct++;
        i++;
    }

    printf("%d letters, %d digits, %d punctuation characters", nLetters, nDigits, nPunct);
    return 0;
}