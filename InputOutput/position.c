#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// main function
int main()
{
    // == File Positioning ==
    // You need to be able to access data in a file other than sequential order
    // NOTE: Finding out where you are in a file, and moving in a file.

    // NOTE: ftell(), fgetpos()
    // long ftell(FILE *pfile);
    // HACK: ftell tells the offset in bytes from the beginning of the file

    FILE* fp;
    int len;

    // fp = fopen("file2.txt", "r");
    // if (!fp) {
    //     perror("Error opening file.");
    //     return -1;
    // }

    // fseek(fp, 0, SEEK_END);
    // len = ftell(fp);
    // fclose(fp);
    // fp = NULL;

    // printf("Total size of file.txt = %d bytes\n", len); // Size of the file

    //NOTE: fgetpos()
    // int fgetpos(FILE *pFile, fpos_t * position)

    // NOTE: fseek() to set a position in a file
    // int fseek(FILE *pfile, long offset, int origin)

    // // EXAMPLE fseek()
    // fp = fopen("position.txt", "w+");

    // fputs("This is Jaskaran from the position file.", fp);
    // fseek(fp, 40, SEEK_SET); // REASON: 40? - move 40 bytes from the beginning
    // fputs(" Hello how are you?", fp);
    // fclose(fp);
    // fp = NULL;

    // NOTE: fsetpos()
    // int fsetpos(FILE *pfile, const fpos_t *position);

    fpos_t position;

    fp = fopen("file5.txt", "w+");
    fgetpos(fp, &position);
    fputs("Hello, World", fp);

    fsetpos(fp, &position);
    fputs("This is going to override previous content", fp);
    fclose(fp);

    return 0;
} // end of main