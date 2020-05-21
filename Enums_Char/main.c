//
//  main.c
//  Enums_Char
//
//  Created by Jaskaran Singh on 2020-01-04.
//  Copyright © 2020 Jaskaran Singh. All rights reserved.
//

#include <stdio.h>

int main() {
    // insert code here...
    enum primaryColor {red, yellow, blue}; // only these colors are allowed for this enum type
    enum primaryColor myColor = red;
    enum month {January, February, March, April, May, June, July, August};
    enum month ThisMonth;
    ThisMonth = February; // February would be 1 (list index 1)
    enum direction {up, down, left=10, right};
    enum direction direction_up = up;
    enum direction direction_down = down;
    enum direction direction_left = left;
    enum direction direction_right = right;
    printf("%d\n", direction_up);    // 0
    printf("%d\n", direction_down);  // 1
    printf("%d\n", direction_left);  // 10
    printf("%d\n", direction_right); // 11
    
    
    char newLine = '\n'; // Newline
    printf("%c", newLine);
    
    char broiled;
    char a = 97; // Assigning ASCII to char
    printf("%c\n", a);
    broiled = 'T';
    
    
}
