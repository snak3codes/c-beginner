#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
// main function
{
    printf("== EXAMPLE 1 ==\n");
    char multiple[] = "a string";
    char* p = multiple;

    for (int i = 0; i < strnlen(multiple, sizeof(multiple)); ++i) {
        printf("multiple[%d] = %c | *(p+%d) = %c | &multiple[%d] = %p | p+%d = %p\n",
            i, multiple[i], i, *(p + i), i, &multiple[i], i, p + i);
    }
    //NOTE: how the memory address only changes by 1. That's because
    // a character occupies 1 byte in memory.

    printf("== EXAMPLE 2 ==\n");
    long multiple2[] = { 15L, 25L, 35L, 45L, 55L, 60L, 65L, 70L, 75L };
    long* p2 = multiple2;

    for (int i = 0; i < sizeof(multiple) / sizeof(multiple[0]); ++i) {
        printf("Address p+%d = (&multiple[%d]):%llu   *(p+%d)  value:%lu\n",
            i, i, (unsigned long long)(p2 + i), i, *(p2 + i));
    }
    //NOTE: how the memory address jumps by 8. That's because a long int
    // occupies 8 bytes in memory.
    printf("\nType long occupies: %d bytes\n", (int)sizeof(long));

    return 0;
}