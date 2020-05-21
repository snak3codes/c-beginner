#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// main function
int main()
{
    // NOTE: fgetc() function reads a cjaracter from an open text file

    // EXAMPLE 1: Printing a single character
    // FILE* pFile = fopen("myfile_renamed.txt", "r");
    // int mchar = fgetc(pFile);

    // printf("%c\n", mchar);

    // fclose(pFile);
    // pFile = NULL;

    // EXAMPLE 2: Printing all characters
    // FILE* fp;
    // int c;

    // fp = fopen("myfile_renamed.txt", "r");
    // if (!fp) {
    //     perror("Error in opening File.");
    //     return -1;
    // }

    // while ((c = fgetc(fp)) != EOF) {
    //     printf("%c", c);
    // }
    // puts("");
    // fclose(fp);
    // fp = NULL;

    // EXAMPLE 3: Read the first 60 chars of the first line.
    // FILE* fp;
    // char str[60];
    // fp = fopen("myfile_renamed.txt", "r");

    // if (!fp) {
    //     perror("Error opening File.");
    //     return -1;
    // }

    // if (fgets(str, 60, fp)) {
    //     // Writing content to stdout
    //     printf("%s", str);
    // }
    // fclose(fp);
    // fp = NULL;

    // NOTE: You can get formatted input from a file by using fscanf()
    // int fscanf(FILE *stream, const char *format, ...)
    // EXAMPLE 4: Fscanf
    char str1[10], str2[10], str3[10], str4[10];
    int year;
    FILE* fp;

    fp = fopen("file.txt", "w+");
    if (fp) {
        fputs("Hello how are you", fp);
    }

    rewind(fp); // Puts the pointer back at the beginning of the file
    fscanf(fp, "%s %s %s %s", str1, str2, str3, str4);

    printf("Read String 1 |%s|\n", str1);
    printf("Read String 2 |%s|\n", str2);
    printf("Read String 3 |%s|\n", str3);
    printf("Read String 4 |%s|\n", str4);

    fclose(fp);
    fp = NULL;

    return 0;
} // end of main