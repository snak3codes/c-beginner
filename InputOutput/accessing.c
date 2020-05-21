#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// main function
int main()
{
    // == Accessing Files ==

    // NOTE: A program references a file through a file pointer
    // REASON: Can be reused to point to different files

    // A file pointer points to a struct of type FILE that represents a stream
    // Contains information about the file
    // 1. Whether you want to read or write or update the file
    // 2. The address of the buffer in memory to be used for data
    // 3. A pointer to the current position in the file for the nexto operation

    // NOTE: There is a limit to the number of files you can have open
    // defined as FOPEN_MAX in stdio.h

    // Opening a file
    // via the fopen() function --> returns the file pointer for a specific
    // external file

    // NOTE: FILE *fopen(const char * restric name, const char * restrict mode)
    // If the file cannot be opened, fopen() returns NULL

    // NOTE: File Modes
    /* "w", "a", "r" --> write, append, read
       "w+", "a+", "r+" --> write, append, read (reading and writing for all) 
    */

    FILE* pFile = NULL;
    char* filename = "myfile.txt";
    pFile = fopen(filename, "w");

    if (!pFile)
        printf("Failed to open %s.\n", filename);

    fclose(pFile); // Connection between pointer and file is broken
    pFile = NULL;
    // NOTE: Returns EOF (int) if an error occurs
    // EOF is a special character called the end-of-file character.
    // 0 if successfull, -1 if not

    // NOTE: Renaming a file. rename() function. 0 if successfull else non-zero
    if (rename("myfile.txt", "myfile_renamed.txt")) {
        printf("Failed to rename file %s.", filename);
    } else {
        printf("File %s renamed successfully.", filename);
    }

    // NOTE: You can delete a file by invoking the remove() function
    return 0;
}