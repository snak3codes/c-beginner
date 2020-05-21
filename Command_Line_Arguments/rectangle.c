#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    /* Program to calculate perimeter and area of a rectangle. */

    double width = atoi(argv[1]);
    double height = atoi(argv[2]);
    double perimeter = (width + height) * 2;
    double area = width * height;

    printf("Width = %.2f\n", width);
    printf("Height = %.2f\n", height);
    printf("Perimeter = %.2f\n", perimeter);
    printf("Area = %.2f\n", area);

    return 0;
}
