/*
 * Created on Thu Mar 19 2020 at 10:34:16 PM
 *
 * Copyright (c) 2020 - Jaskaran Singh https://github.com/snak3codes
 */

#include <stdio.h>

int main(int argc, char const *argv[])
{
    // Nested Loops
    int count = 10;
    for (int i = 1; i <= count; i++)
    {
        int sum = 0; // Initializing sum for the inner loop
        // Calculate sum of the integers from 1 to i
        for (int j = 1; j <= 1; j++)
        {
            sum += j;
            printf("\n%d\t%d", i, sum);
        }
    }
    return 0;
}
