/*
 * Created on Thu Mar 19 2020 at 9:55:41 PM
 *
 * Copyright (c) 2020 - Jaskaran Singh https://github.com/snak3codes
 */

#include <stdio.h>

int main(int argc, char const *argv[])
{
    // Post test loop, exit control loop. Always runs at least one!
    int a = 40;
    int number;
    do
    {
        printf("%d", a);
    } while (0 == 1);

    do
    {
        scanf("%d\n", &number);
    } while (number != 20);

    return 0;
}
