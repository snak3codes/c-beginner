#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
// main function
{
    // == Pointers and arrays ==
    int values[100];
    int* pValues; // you designate the pointer as poiting to the type of
        // element that is contained in the array.
    pValues = values; // Arrays are pointers. Will point to the 1st element in the array.
    // similar: pValues = &values[0];

    // NOTE: & is not used.
    // The C compiler treats the appearance of an array name without a subscript as a pointer to the array
    // Specifying values without a subscript has the effect of producing a pointer to the first element of
    // the values array.

    // The 2 expressions ar[i] and *(ar + i) are equivalent in meaning.
    // both work if ar is the name of an array, and both work if ar is a pointer variable
    // using an expression such as ar++ only works if ar is a pointer variable.

    return 0;
}