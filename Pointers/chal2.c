#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void square(int* const x) // Can't change the address of the pointer
{
    *x = (*x) * (*x);
    return;
}

// main function
int main()
{
    // == Squares a number by itself ==
    int* a = (int*)malloc(sizeof(int)); // Dynamic malloc
    *a = 4;
    printf("Before squaring. a = %d\n", *a);
    square(a);
    printf("After squaring. a = %d\n", *a);

    return 0;
}