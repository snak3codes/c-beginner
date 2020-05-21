#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
// main function
{
    // == Tokenizing a string: ==
    // a token is a sequence of chars within a string that is bounded by a delimiter
    // breaking a sentece into words is called tokenizing
    // strtok()
    char str3[90] = "Hello how are you -- my name is - Jaskaran";
    const char s[2] = "-";
    char* token;
    token = strtok(str3, s);
    while (token != NULL) {
        printf(" %s\n", token);

        token = strtok(NULL, s);
    }
    return 0;
}