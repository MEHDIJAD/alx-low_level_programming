/*Write a function that prints the last digit of a number.

Prototype: int print_last_digit(int);
Returns the value of the last digit */

#include "main.h"

int print_last_digit(int n)
{
    int last;

    last = n % 10;
    if (n < 0)
        last = -last;

    _putchar(last + '0');
    return (last);

}

