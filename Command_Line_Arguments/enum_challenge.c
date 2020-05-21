/*
 * Created on Sat Mar 14 2020 at 3:35:14 PM
 *
 * Copyright (c) 2020 - Jaskaran Singh https://github.com/snak3codes
 */

#include <stdio.h>

int main(int argc, char const *argv[])
{

    enum Company
    {
        GOOGLE,
        FACEBOOK,
        XEROX,
        YAHOO,
        EBAY,
        MICROSOFT
    };

    enum Company google = GOOGLE;
    enum Company xerox = XEROX;
    enum Company ebay = EBAY;

    printf("Google Company: %d\n", google);
    printf("Xerox Company: %d\n", xerox);
    printf("Ebay Company: %d\n", ebay);

    return 0;
}
