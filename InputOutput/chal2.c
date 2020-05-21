#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILENAME "temp.txt"

// main function
int main()
{
    // == Convert characters in a file to uppercase ==
    // NOTE: Takes everything from temp.txt and puts it in chal2.txt but
    // in UPPERCASE.

    FILE* fp = NULL;
    FILE* fp1 = NULL;

    int ch;

    fp = fopen(FILENAME, "r"); // Reading for FILENAME

    if (!fp) {
        perror("Error opening file.");
        return -1;
    }

    fp1 = fopen("chal2.txt", "w"); // Writing for destination file

    if (!fp1) {
        perror("Error opening file.");
        return -1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        if (islower(ch)) {
            ch = ch - 32;
        }

        fputc(ch, fp1);
    }

    fclose(fp);
    fclose(fp1);
    fp = NULL;
    fp1 = NULL;

    return 0;
} // end of main