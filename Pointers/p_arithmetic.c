#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// NOTE: Passing the array as a pointer
int arraySum2(int* array, const int n)
{
    int sum = 0;
    int* const arrayEnd = array + n;
    // for (; array < arrayEnd; ++array) {
    //     sum += *array;
    // }
    while (array < arrayEnd) {
        sum += *array;
        ++array;
    }
    return sum;
}

/**
 * @brief Returns the sum of all the integers in the array
 * 
 * @param array Array
 * @param n Length of the array
 * @return int Sum to return
 */
// similar: int array[]
int arraySum(int* array, const int n)
{
    int sum = 0, *ptr;
    // NOTE: arrayEnd = pointing to the end of the array
    // array is a pointer to the first element. Adding n makes arrayEnd point
    // to the last element in the array;
    int* const arrayEnd = array + n;

    // similar: ptr < array + n
    for (ptr = array; ptr < arrayEnd; ++ptr)
        sum += *ptr;
    return sum;
}

int main()
// main function
{
    // == Pointer Arithmetic ==
    // pointer++ or *(pointer + 1) will point to the next element's address
    // in that array.

    int values[5] = { 1, 2, 3, 4, 5 };
    int* pValues = values;

    printf("The first element of the array is %d\n", *pValues);
    pValues++;
    printf("The second element of the array is %d\n", *pValues);
    // Changing values[4] to 10
    // TODO:  *(pValues + 4) = 10; Creates a sixth element????????
    *(pValues + 3) = 10;
    for (int i = 0; i < 5; i++)
        printf("%d ", values[i]);
    // == Sum of array ==
    puts("");
    // values in this case is actually a pointer to the array values
    // explains why you are able to change the elements of an array from within
    // a function
    printf("The sum of array values is %i\n", arraySum(values, 5));
    printf("The sum of array values is %i", arraySum2(values, 5));
    return 0;
}