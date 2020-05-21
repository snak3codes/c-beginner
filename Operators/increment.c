#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
// main function
{
    // == Increment ==

    // PRE INCREMENT
    // ++i will increment the value of i, and then return the incremented value
    int i = 1;
    int j = ++i;
    // i = 2, j = 2

    // POST INCREMENT
    // i++ will increment the value of i, but return the original value that
    // i held before being incremented.
    int x = 1;
    int y = x++;
    // x = 2, y = 1

    // Guideline. "Prefer ++i over i++"

    printf("i = %d, j = %d.\nx = %d, y = %d\n", i, j, x, y);
    return 0;
}