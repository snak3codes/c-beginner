#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct date {
    int month;
    int day;
    int year;
} today;

// main function
int main()
{
    // == Structs ==
    struct date birthday = { 1, 14, 2000 };
    printf("Birthday: Month: %d, Day: %d, Year: %d\n", birthday.month, birthday.day, birthday.year);
    // today.day = 20, today.month = 5, today.year = 2020;
    struct date today = { .month = 5, .day = 19, .year = 2020 };
    today = (struct date) { 5, 20, 2020 }; // Assign new values to type struct date
    printf("Today is: Month: %d, Day: %d, Year: %d", today.month, today.day, today.year);
    return 0;
}