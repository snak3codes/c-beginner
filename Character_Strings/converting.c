#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
// main function
{
    // toupper(), tolower()
    char buff[] = "i am an uppercase string";
    char buff2[] = "i am an lowercase string";

    for (int i = 0; (buff[i] = (char)toupper(buff[i])) != '\0'; i++)
        ;
    for (int i = 0; buff2[i] != '\0'; i++) {
        buff[i] = (char)tolower(buff[i]);
    };

    printf("%s\n%s\n", buff, buff2);

    // atoi, atof, atol, atoll Convert string to int, etc.
    char num[] = "450";
    char num2[] = "400";

    printf("Sum of %d and %d is %d.\n", atoi(num), atoi(num2), atoi(num) + atoi(num2));

    // strtod, strtof, strtold
    double value = 0;
    char str[] = "3.5 2.5 1.26"; // The string to be converted
    char* pstr = str; // Pointer to the string to be converted
    char* ptr = NULL; // Pointer to character position after conversion

    while (true) {
        value = strtod(pstr, &ptr); // Convert starting at pstr
        if (pstr == ptr) // pstr stored if no conversion
            break;
        else {
            printf("%.2f ", value); // Output the resultant value
            pstr = ptr; // Store start for next conversion
        }
    }
    return 0;
}