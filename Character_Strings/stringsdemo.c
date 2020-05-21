#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
// main function
{
    char src[50], dest[50];

    strcpy(src, " This is source");
    strcpy(dest, "This is destination");

    strncat(dest, src, 15);

    printf("Final destination string: |%s|", dest);
    printf("\n--Comparing Strings--\n");
    printf("strcmp(\"A\", \"A\") is: %d\n", strcmp("A", "A"));
    printf("strcmp(\"A\", \"B\") is: %d\n", strcmp("A", "B"));
    printf("strcmp(\"B\", \"A\") is: %d\n", strcmp("B", "A"));
    printf("strcmp(\"C\", \"A\") is: %d\n", strcmp("C", "A"));
    printf("strcmp(\"Z\", \"a\") is: %d\n", strcmp("Z", "a"));
    printf("strcmp(\"apples\", \"apple\") is: %d\n", strcmp("apples", "apple"));
    // The strncmp function compares until it has compared a number of chars
    // or until they differ
    if (strncmp("astronomy", "astro", 5) == 0)
        printf("Found: Astronomy in astro\n");

    if (strncmp("astounding", "astro", 5) == -1)
        printf("Not Found: astounding in astro");
    return 0;
}