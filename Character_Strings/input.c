#include <stdio.h>
#include <stdlib.h>

int main()
// main function
{

    char input[] = {};
    printf("Please input your name: ");
    scanf("%s", input);
    printf("Thank you %s\n", input);
    return 0;
}