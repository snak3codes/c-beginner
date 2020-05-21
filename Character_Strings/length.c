#include <stdio.h>
#include <stdlib.h>

int main()
// main function
{
    char str1[] = "To be or not to be";
    char str2[] = ", that is the question";
    unsigned int count = 0; // Stores the string length

    while (str1[count] != '\0') // Increment count till we reach the null-char
        count++;

    printf("The length of the string \"%s\" is %d characters.\n", str1, count);

    count = 0; // reset count for next string
    while (str2[count] != '\0')
        count++;

    printf("The length of the string \"%s\" is %d characters.\n", str2, count);

    return 0;
}