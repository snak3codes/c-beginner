/*
 * Created on Tue Mar 17 2020 at 5:27:46 PM
 *
 * Copyright (c) 2020 - Jaskaran Singh https://github.com/snak3codes
 */

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int numberToTest, remainder;

    printf("Enter your number to be tested: ");
    scanf("%i", &numberToTest);
    remainder = numberToTest % 2;

    if (remainder == 0)
    {
        printf("The number is even\n");
    }
    else
    {
        printf("The number is odd\n");
    }

    remainder == 0 ? printf("YAY, 2k\n") : printf("YO, 2k+1\n");

    return 0;
}
