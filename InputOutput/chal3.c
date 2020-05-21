#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILENAME "chal3.txt"

// main function
int main()
{

    // == Print contents of file in 'reverse' order ==

    // NOTE: Start reading from the end of the file

    // Use fseek to seek to the end of the file
    // Use ftell to get the position of the file pointer
    // Display as output the file in reverse order

    FILE* fp = NULL;
    int count = 0;
    int i = 0;

    fp = fopen(FILENAME, "r");

    if (!fp) {
        perror("Error opening file.");
        return -1;
    }

    // otherwise, seek to the end of the file
    fseek(fp, 0, SEEK_END); // Seek to the end
    // get the position of the file pointer
    count = ftell(fp);
    while (i < count) { // number of bytes to read in
        i++;
        fseek(fp, -i, SEEK_END);
        printf("%c", fgetc(fp));
    }

    printf("\n");
    fclose(fp);
    fp = NULL;
    return 0;
} // end of main