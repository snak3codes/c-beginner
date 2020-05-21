#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
// main function
{
    // == Introduction ==
    // Pointers occupy 8 bytes, and the addresses have 16 hexadecimal digits(on 64-bit). 8 on 32-bit
    int number = 99, *pNumber = &number; // pointer of type int
    // printf("Memory where the 'number' variable exists: %p.\nMemory address 'pNumber' is pointing at %p.\n", &number, pNumber);
    // printf("Therefore pNumber points to 'number's memory address.");

    // == Defining Pointers ==

    // == Accessing Pointers ==
    // Indirection operator: * <-- dereference
    // You use the & operator to reference the address that the pointer variable occupies
    int num = 15;
    int* pointer = &num;
    int result = 0;
    result = *pointer + 5;
    printf("Original num: %d\nNew result: %d\n", *pointer, result);
    printf("pointer's address: %p\n", (void*)&pointer);
    printf("pointer's size: %d bytes\n", (int)sizeof(pointer)); // 8 bytes on 64-bit. 4 on 32-bit

    return 0;
}
