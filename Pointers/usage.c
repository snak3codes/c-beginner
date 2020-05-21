#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
// main function
{
    int number = 0;
    int* pNumber = NULL;
    number = 10;
    pNumber = &number;
    *pNumber += 25;

    printf("%d", number);
    return 0;
}
