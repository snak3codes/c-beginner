#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct time {
    int hour;
    int minutes;
    int seconds;
};

struct date {
    int month;
    int day;
    int year;
};

struct dateAndTime {
    // NOTE: Nesting here
    struct date sdate;
    struct time stime;
};

// NOTE: Declaring a structure within a structure

struct Time {
    struct Date {
        int day;
        int month;
        int year;
    } dob; // NOTE: Date does not exist outside of Time.
    int hour;
    int minutes;
    int seconds;
};

// main function
int main()
{

    // struct dateAndTime event;
    // event.sdate.month = 10;
    // event.stime.seconds = 0;
    // ++event.stime.seconds;
    // printf("Event month: %d\n", event.sdate.month);
    // printf("Event seconds: %d\n", event.stime.seconds);
    struct dateAndTime event = { { 2, 1, 1975 }, { 3, 30, 0 } };
    struct dateAndTime events[100];
    events[0].stime.hour = 12;
    events[0].stime.minutes = 0;
    events[0].stime.seconds = 0;
    return 0;
}
