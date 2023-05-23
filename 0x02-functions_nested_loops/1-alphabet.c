#include <stdio.h>
/**
 * main - main block
 * Description: print the alphabite in mlowercase
 * follewd by a new line.
 * Return: 0
 */
void print_alphabet(void);
{
    char c = 'a';

    while (c <= 'z')
    {
        putchar(c);
        c++;
    }
    putchar('\n');
    return;
}
