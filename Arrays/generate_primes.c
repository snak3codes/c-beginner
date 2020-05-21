#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int p;
    int i;

    int primes[50] = { 0 };
    int primeIdx = 2;
    bool isPrime;
    // Hardcode first two prime numbers
    primes[0] = 2;
    primes[1] = 3;

    for (p = 5; p <= 100; p = p + 2) {
        isPrime = true;
        for (i = 1; isPrime && p / primes[i] >= primes[i]; ++i) {
            if (p % primes[i] == 0) {
                isPrime = false;
            }
        }
        if (isPrime == true) {
            primes[primeIdx] = p;
            ++primeIdx;
        }
    }
    for (i = 0; i < primeIdx; ++i) {
        printf("%i ", primes[i]);
        // 2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97
    }
    return 0;
}