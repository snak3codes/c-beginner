#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
// main function
{
    int value = 0;
    int *pvalue = &value; // Set pointer to refer to value
    printf("Input an integer:\n");
    scanf("%d", pvalue);    // Read into value via the pointer

    printf("You entered %d.\n", value); // Output the value entered
    return 0;
}
