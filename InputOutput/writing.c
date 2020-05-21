#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// main function
int main()
{

    // == Writing to a text file ==
    // NOTE: Use function fputc() -- writes a single char to a text file.
    // int fputc(int ch, FILE *pfile);
    // EXAMPLE 1: Using fputc
    FILE* fp;
    int ch;

    // fp = fopen("file2.txt", "w+");

    // for (ch = 33; ch <= 100; ch++) {
    //     fputc(ch, fp); // Writing ASCII values.
    // }

    // fclose(fp);
    // fp = NULL;

    // EXAMPLE 2: Use function fputs() to write to any file or stream
    // NOTE: Does not write '\0'
    // int fputs(const char* str, FILE *pfile);
    // fp = fopen("file3.txt", "w+");

    // fputs("This is Jaskaran.\n", fp);
    // fputs("I am happy to be learning C.", fp);

    // fclose(fp);
    // fp = NULL;

    //NOTE: For writing formatted output to a stream use fprintf()
    // int fprintf(FILE *stream, const char *format, ...)

    // fp = fopen("file4.txt", "w+");
    // if (fp)
    //     fprintf(fp, "%s %s", "Jaskaran", "Singh");

    // fclose(fp);
    // fp = NULL;

    return 0;

} // end of main