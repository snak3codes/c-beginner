#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
// main function
{

    // It's all about where you place the 'const' keyword!!
    // You can use the const keyword when you declare a pointer to indicate
    // that the value pointed to must not be changed.
    // Doing this, you cannot modify the value stored through the pointer.
    long value = 999L;
    const long* pValue = &value; // becomes a read-only variable
    // We can still modify value (const only applies to the pointer)
    value = 7777L;
    // You can still change what the pointer points to.
    long number = 8888L;
    pValue = &number;
    // You might also want to ensure that the address stored in a pointer cannot be changed
    int count = 87;
    int* const pcount = &count; // Defines a constant pointer.
    // Ensures that the pointer always points to the same thing.
    *pcount = 17; // Ok - changes the value of count
    // You can create a const pointer that points to a const value
    int item = 25;
    const int* const pItem = &item;
    // - Cannot change the address stored in pItem
    // - Cannot use pItem to modify what it points to
    // - Can still change the value of item directly!

    return 0;
}