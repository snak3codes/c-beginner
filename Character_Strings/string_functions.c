#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
// main function
{

    // == Length of a String ==
    puts("-- Length of a string --");
    char string[] = "Hello World";
    // %lu = unsigned long
    // returned as size_t
    printf("Length of \"%s\" is %lu", string, strlen(string));
    puts("");
    // == Copying Strings ==
    puts("-- Copying Strings --");
    char s[100];
    char src[50], dest[50];
    strcpy(src, "This is source");
    strcpy(dest, "This is destination");
    printf("%s\n%s\n", src, dest);
    /* NOTE: The strcpy function does not check to see whether the source string
    actually fits in the target string. It is safer to use strncpy() */
    char s1[40];
    char s2[12];
    memset(s2, '\0', sizeof(s2));
    strcpy(s1, "Hello how are you doing?");
    strncpy(s2, s1, 10);
    printf("%s\n%s\n", s1, s2);
    char myString[] = "My name is Jaskaran";
    char temp[50];
    strncpy(temp, myString, sizeof(temp) - 1);
    printf("%s\n", temp);
    // == Concatenating Strings ==
    puts("-- Concatenating Strings--");
    char string1[] = "my string";
    char input[80];
    // printf("Enter a string to be concatenaded: ");
    // scanf("%s", input);
    // printf("\nThe string %s concatenated with %s is:::\n", string1, input);
    // printf("%s", strcat(string1, input));
    // == Comparing Strings ==
    printf("--Comparing Strings--\n");
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