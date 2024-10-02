/*Write a program that prints all single digit numbers of base 10 starting from 0, followed by a new line.

All your code should be in the main function */

#include <stdio.h>

int main(void)
{
    char c;
    c = '0';
    while(c <= '9')
    {
        putchar(c);
        c++;
    }
    putchar('\n');

    return (0);
}