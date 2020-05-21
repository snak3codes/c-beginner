#include <stdio.h>
#include <stdlib.h>

/* 
1. GCD of two non-negative integer 
2. Calculate the absolute value of a number
3. Calculate the square root of a number
*/
// Function prototypes
int gcd(int x, int y);
int gcd2(int x, int y);
float toAbsolute(float x);
float squareRoot(float x);

int main()
// main function
{
    return 0;
}

int gcd(int x, int y)
{
    while (x != y) {
        if (x > y) {
            x = x - y;
        } else {
            y = y - x;
        }
    }
    return x;
}

int gcd2(int x, int y)
{
    int temp;
    while (y != 0) {
        temp = x % y;
        x = y;
        y = temp;
    }
    return x;
}

float toAbsolute(float x)
{
    if (x < 0)
        x = -x;
    return x;
}

float squareRoot(float x)
{
    const float epsilon = .0001;
    float guess = 1.0;

    if (x < 0) {
        printf("Negative argument to squareRoot.\n");
        return -1;
    }
    while (toAbsolute(guess * guess - x) >= epsilon)
        guess = (x / guess + guess) / 2.0;
    return guess;
}