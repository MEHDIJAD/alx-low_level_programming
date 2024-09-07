/*Write a function that prints the 9 times table, starting with 0.

Prototype: void times_table(void);
Format: see example 
ulien@ubuntu:~/0x02$ ./9-times_table | cat -e
0,  0,  0,  0,  0,  0,  0,  0,  0,  0$
0,  1,  2,  3,  4,  5,  6,  7,  8,  9$
0,  2,  4,  6,  8, 10, 12, 14, 16, 18$
0,  3,  6,  9, 12, 15, 18, 21, 24, 27$
0,  4,  8, 12, 16, 20, 24, 28, 32, 36$
0,  5, 10, 15, 20, 25, 30, 35, 40, 45$
0,  6, 12, 18, 24, 30, 36, 42, 48, 54$
0,  7, 14, 21, 28, 35, 42, 49, 56, 63$
0,  8, 16, 24, 32, 40, 48, 56, 64, 72$
0,  9, 18, 27, 36, 45, 54, 63, 72, 81$*/

#include <stdio.h>
#include "main.h"

void    times_table(void)
{
    int i;
    int j;
    int rep;
    i = 0;
    while (i < 10)
    {
        j = 0;
        while (j < 10)
        {
            rep = i * j;
            if (rep < 10)
            {
                _putchar(rep +'0');
                if (j < 9)
                {
                    _putchar(',');
                    _putchar(' ');
                    _putchar(' ');
                }
            }
            else if (rep >= 10)
            {
                _putchar((rep / 10) + '0');
                _putchar((rep % 10) + '0');
                if (j < 9)
                {
                    _putchar(',');
                    _putchar(' ');
                }
            }
            j++; 
        }
        _putchar('\n');
        i++;
    }
}