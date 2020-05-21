#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Prototypes
int len(const char* p);
int stringLen(const char* p);

// main function
int main()
{
    // == Counting characters in a String.
    // char word[] = "Hello Sir!";
    // printf("The length of the word is %d\n", len(word));
    // printf("The length of the word is %d\n", len(""));
    // printf("The length of the word is %d\n", len("Hello"));
    printf("The length of the word is %d\n", stringLen("Jaskaran"));
    printf("-----\n");
    printf("The length of the word is %d\n", stringLen(""));
    return 0;
}

/**
 * @brief Determined the length of the string using pointer arithmetic
 * 
 * @param p Character pointer
 * @return int Length of the string
 */
int len(const char* p)
{
    int len = 0;
    while (*p)
        ++len, ++p;
    return len;
}

int stringLen(const char* string)
{
    // NOTE: Making lastAddress point to the address of the first element
    const char* lastAddress = string;
    while (*lastAddress)
        ++lastAddress; // move the pointer along the string
    printf("Address of lastAddress: %p\n", lastAddress);
    printf("Address of string: %p\n", string);
    printf("Difference in memory: %lu. This is also the length of the char array.\n",
        lastAddress - string);
    // Difference between last address and first address.
    // Hexadecimal Calculation
    return lastAddress - string;
}
