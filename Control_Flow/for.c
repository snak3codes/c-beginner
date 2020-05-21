/*
 * Created on Thu Mar 19 2020 at 12:18:47 AM
 *
 * Copyright (c) 2020 - Jaskaran Singh https://github.com/snak3codes
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{

    for (int count = 1; count <= 10; count++)
    {
        printf(" %d", count);
    }
    printf("\n");
    for (int i = 1, j = 2; i <= 5; ++i, j = j + 2)
    {
        printf(" %5d", i * j);
    }

    unsigned long long sum = 0LL;
    unsigned int count = 0;

    printf("\nEnter the number of integers you want to sum: ");
    scanf(" %u", &count);

    for (unsigned int i = 1; i <= count; sum += i++)
        ;

    printf("\nTotal of the first %u numbers is %llu\n", count, sum);

    return 0;
}
