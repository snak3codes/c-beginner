/*
 * Created on Sat Mar 14 2020 at 3:56:39 PM
 *
 * Copyright (c) 2020 - Jaskaran Singh https://github.com/snak3codes
 */

// Header
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 33;
    int b = 15;
    int result = 0;
    result = a + b;
    printf("a is %d\n", a);
    printf("c is %d\n", a++);
    printf("a is %d\n", a);

    _Bool aa = 1;
    _Bool bb = 0;
    _Bool resulto;

    resulto = aa || bb;

    printf("%d", resulto);

    return 0;
}
