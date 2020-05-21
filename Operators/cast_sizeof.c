/*
 * Created on Sun Mar 15 2020 at 10:52:26 AM
 *
 * Copyright (c) 2020 - Jaskaran Singh https://github.com/snak3codes
 */

#include <stdio.h>
int main(int argc, char const *argv[])
{
    // Casting
    int x = 0;
    float f = 19.23;
    x = f;
    x = (float)x;
    printf("X is %d\n", x);

    printf("result is %i\n", ((int)21.51 + (int)26.99)); // 21 + 26

    // sizeof --> # of bytes occupied in memory by a given type
    printf("sizeof int = %lu\n", sizeof(int));
    printf("sizeof int_64 = %lu", sizeof(int64_t));

    // Ternary operator
    /* If condition is true ? then value X: otherwise value Y */
    return 0;
}