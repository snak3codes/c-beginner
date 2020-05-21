#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
// main function
{
    // A pointer of type void* can contain the address of a data item of any type!!
    // void* is often used as a parameter type or return value type with functions
    // that deal with data in a type-independent way

    // NOTE:
    // 1. The void pointer does not know what type of object it is pointing to, so,
    // it cannot be dereferenced directly
    // 2. The void pointer must be first explicitly casted to another pointer type
    // before it is dereferenced.
    int i = 10;
    float f = 2.34;
    char ch = 'k';
    void* ptr;

    ptr = &i;
    printf("Value of i = %d\n", *(int*)ptr);

    ptr = &f;
    printf("Value of f = %.2f\n", *(float*)ptr);

    ptr = &ch;
    printf("Value of ch = %c\n", *(char*)ptr);

    return 0;
}