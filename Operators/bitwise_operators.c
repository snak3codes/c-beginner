/*
 * Created on Sun Mar 15 2020 at 10:06:08 AM
 *
 * Copyright (c) 2020 - Jaskaran Singh https://github.com/snak3codes
 */

#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* === BITWISE OPERATORS === */

    /* &, |, ^(exclusive or), ~, <<, >> */
    unsigned int a = 60; // 0011 1100 (unsigned = only positive)
    unsigned int b = 13; // 0000 1101
    int result = 0;

    result = a & b; // 0000 1100 --> Binary for 12
    printf("result is %d\n", result);

    result = a | b; // 0011 1101 --> Binary for 61
    printf("result is %d\n", result);

    result = a ^ b; // 0011 0001 --> Binary for 49
    printf("result is %d\n", result);

    /* TODO Learn */
    result = ~b; //  1110 --> Binary for -14
    printf("result is %d\n", result);

    result = a << 2; // 1111 0000
    printf("result is %d\n", result);

    result = a >> 2; // 0000 0011 --> Binary for 3 (here we lost some bits)
    printf("result is %d\n", result);

    return 0;
}
