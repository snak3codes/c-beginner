/*
 * Created on Sun Mar 15 2020 at 12:42:24 PM
 *
 * Copyright (c) 2020 - Jaskaran Singh https://github.com/snak3codes
 */

#include <stdio.h>
int main(int argc, char const *argv[])
{
    // Convert minutes to years and days.

    int minutesEntered = 0;
    double years = 0.0;
    double days = 0.0;
    double minutesInYear;

    // Input
    puts("Please enter the number of minutes: ");
    scanf("%d", &minutesEntered);

    // Conversion
    minutesInYear = (60 * 24 * 365);
    years = (minutesEntered / minutesInYear);
    days = (minutesEntered / 60.0) / 24.0;

    printf("%d minutes is approximately %.2f years and %i days\n",
           minutesEntered, years, (int)days);

    puts("=== sizeof datatypes ===");
    printf("Byte size for char = %zd\n", sizeof(char));
    printf("Byte size for int = %zd\n", sizeof(int));
    printf("Byte size for long = %zd\n", sizeof(long));
    printf("Byte size for long long = %zd\n", sizeof(long long));
    printf("Byte size for double = %zd\n", sizeof(double));
    printf("Byte size for long double = %zd\n", sizeof(long double));

    return 0;
}
