#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void copyString(char to[], char from[])
{
    int i;
    for (i = 0; from[i] != '\0'; ++i) {
        to[i] = from[i];
    }
    to[i] = '\0';
}

// NOTE: Much more efficient method
void copyStringP(char* to, char* from)
{
    // for (; *from != '\0'; ++from, ++to)
    //     *to = *from;
    // *to = '\0';
    while (*from) { // The null-char = 0, so will jump out of loop then.
        *to++ = *from++; // post increment. Add 1 after assignment
    }
    // NOTE: Since we never run the loop when we encounter '\0'.
    // The null char is not copied, but our pointer is pointing at the end of
    // the array, so we add it ourselves.
    *to = '\0';
}

int main()
// main function
{
    // == Pointers and Strings (char arrays) ==
    // Using a pointer to a character string
    char original[] = "String to be copied.";
    char duplicate[50]; //DEBUG: when duplicate[] = "";
    copyStringP(duplicate, original);
    printf("Original = %s\nDuplicate = %s", original, duplicate);
    return 0;
}