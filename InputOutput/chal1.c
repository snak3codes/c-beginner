#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILENAME "chal1.txt"

// main function
int main()
{
    // == Find total number of lines in a text file ==
    FILE* fp;
    int c;

    fp = fopen(FILENAME, "r");

    if (!fp) {
        perror("Error in opening file.");
        return -1;
    }

    int linesCount = 1; // HACK: Counting the last line without \n
    while ((c = fgetc(fp)) != EOF) {
        if (c == '\n')
            ++linesCount;
    }

    printf("Number of lines: %d", linesCount);

    return 0;
} // end of main