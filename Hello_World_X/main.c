//
//  main.c
//  Hello World
//
//  Created by Jaskaran Singh on 2019-12-19.
//  Copyright © 2019 Jaskaran Singh. All rights reserved.
//

// Preprocessor directive (#include directive)
// Required for 'printf' function
// Standard Input-Output
#include <stdio.h> // C library to perform Input/Output operations. **Ran before compiling source code.**
// .h --> extension - header file

int main() { // Entry point to the program.
    // Block of code.
    char str[100];
    double i;
    
    printf("Enter a double and a string: ");
    scanf("%lf %s", &i, str); // Input - %s string, %d int
    
    printf("\nYou entered: %lf %s\n", i, str); // Output.
    return 0; // Return value.
}
