#include <stdio.h>
#include <stdlib.h>

// Defining constants. No equal and no semicolon.
// Always a global variable if defined by preprocessor.
#define PI 3.14159
#define STR "Hello World"

int main()
// main function
{
    // Defining constants using 'const' keyword. C90 Feature
    const int age = 20;
    printf("%f", PI);
    puts("");
    printf("%s", STR);
    puts("");
    printf("%d", age);
    return 0;
}
