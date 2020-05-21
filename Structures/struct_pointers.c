#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// main function
int main()
{
    // == Structures and Pointers ==
    // NOTE: C allows for pointers to structures. "Easier to manipualte"
    // REASON: In some older C versions, a structure cannot be passed as an
    // argument to a function, but a pointer to a structure can.

    struct date {
        int month;
        int day;
        int year;
    } todaysDate;

    struct date* pDate; // Pointer to struct date

    pDate = &todaysDate; // Point to address of the todaysDate struct

    (*pDate).day = 21;
    (*pDate).month = 1;
    (*pDate).year = 2020;

    if ((*pDate).month == 1) { // pDate->month
        printf("It is January!\n");
    }
    // NOTE: The structure pointer operator -> (now you don't have to dereference)
    // instead of (*x).y, you can do x->y
    if ((pDate->day) == 21) {
        printf("It is the 21, Yayy");
    }

    struct date today, *pToday;
    pToday = &today;

    pToday->month = 5;
    pToday->day = 20;
    pToday->year = 2015;

    printf("Today's date is %i/%i/%.2i.\n", pToday->month, pToday->day,
        pToday->year % 100);

    // == Structures that contain pointers ==
    struct intPtrs {
        int* p1;
        int* p2;
    };

    struct intPtrs pointers; // A structure that has two pointer members
    int i1 = 100, i2;

    pointers.p1 = &i1;
    pointers.p2 = &i2;
    *pointers.p2 = -97;

    printf("i1 = %i, *pointers.p1 = %i\n", i1, *pointers.p1);
    printf("i2 = %i, *pointers.p2 = %i\n", i2, *pointers.p2);

    // Character arrays / character pointers
    struct names {
        char first[20];
        char last[20];
    };

    struct pnames {
        char* first;
        char* last;
    };

    struct names veep = { "Talia", "Summers" }; // 40 bytes to hold the 2 names
    struct pnames treas = { "Brad", "Fallingjaw" }; // 16 bytes to hold the 2 addresses
    printf("%s and %s\n", veep.first, treas.first);

    // One instance in which it does make sense to use a pointer in a structure to
    // handle a string is if you are dynamically allocating that memory
    // 1. Use a pointer to store the address
    // 2. Has the advantage that you can ask malloc() to allocate just the amount
    // of space that is needed for a string.

    // NOTE: Understand that the two strings are not stored in the structure

    return 0;
}