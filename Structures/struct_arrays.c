#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct date {
    int month;
    int day;
    int year;
};

struct month {
    int numberOfDays;
    char name[3];
};

// main function
int main()
{
    // == Arrays of structures ==
    struct date myDates[10];
    myDates[1].month = 8;
    myDates[1].day = 8;
    myDates[1].year = 1986;

    printf("Second entry. Month: %d, Day: %d, Year: %d\n", myDates[1].month,
        myDates[1].day, myDates[1].year);

    struct date newDates[5] = { { 1, 6, 1975 }, { 10, 2, 2007 },
        { 10, 30, 1980 } };
    // Sets the first three dates in the array to 1/6/1975,
    // 10/2/2007, 10/30/1980
    struct date newDates2[5] = { [2] = { 12, 10, 1985 } };
    struct date newDates3[5] = { [2].month = 12, [1].day = 30 };
    struct month aMonth;
    aMonth.numberOfDays = 31;
    aMonth.name[0] = 'J';
    aMonth.name[1] = 'a';
    aMonth.name[2] = 'n';

    struct month bMonth = { 29, { 'F', 'e', 'b' } };
    printf("The second month is %s and it has %d days", bMonth.name, bMonth.numberOfDays);
    struct month months[12];
    return 0;
}
