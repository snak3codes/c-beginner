#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(int x, int y)
{
    // X and Y are local to this function. They are not going to be modified
    // outside this function
    int temp;
    temp = x; // saves the value of x
    x = y; // put y into x
    y = temp; // put temp into y
    return;
}

void swap_ref(int* x, int* y)
{
    // X and Y are pointers that hold the address of the passed arguments
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

// main function
int main()
{
    // == Pass by Reference ==
    // Modifying data

    // Pass by value is when a function copies the actual value of an argument
    // into the formal parameter of the function.
    // Changes made to the param inside the func have no effect on the argument
    // NOTE: C uses call by value to pass arguments
    printf("--Pass by value--\n");
    // Local variable declaration
    int a = 100, b = 200;
    printf("Before swap. a = %d, b = %d\n", a, b);
    swap(a, b);
    printf("After swap. a = %d, b = %d\n", a, b);
    // NOTE: Notice how a and b values are NOT swapped.

    // Passing data using copies of pointers. Pass by reference ==>
    // copies the address of an argument into the formal parameter.
    // The changes made to the parameter affect the passed argument.
    printf("--------\n--Pass by reference--\n");
    int x = 100, y = 200;
    printf("Before swap. x = %d, y = %d\n", x, y);
    swap_ref(&x, &y); // Passing the addresses of the variables as args.
    printf("After swap. x = %d, y = %d\n", x, y);
    // REVIEW:
    /* You can communicate two kinds of information about a variable to a func
        1. You can transmit the value of x and the function must be declared 
        with the same type as x
        2. You can transmit the address of x and require the function def 
        to include a pointer to the correct type */
    return 0;
}