/*Write a function that prints the n times table, starting with 0.

Prototype: void print_times_table(int n);
If n is greater than 15 or less than 0 the function should not print anything*/

#include "main.h"

void print_times_table(int n)
{
        int i;
        int j;
        int rep;

        if (n < 0 || n > 15)
	        return;
        i = 0;
        while (i <= n)
            {
            j = 0;
            while (j <= n)
            {
                rep = i * j;
                if (rep < 10)
                {
                    _putchar(rep +'0');
                    if (j < n)
                    {
                        _putchar(',');
                        _putchar(' ');
                        _putchar(' ');
                        _putchar(' ');
                    }
                }
                else if (rep < 100)
                {
                    _putchar((rep / 10) + '0');
                    _putchar((rep % 10) + '0');
                    if (j < n)
                    {
                        _putchar(',');
                        _putchar(' ');
                        _putchar(' ');
                    }
                }
                else
		        {
			        _putchar('0' + rep / 100);
			        _putchar('0' + (rep / 10 % 10));
			        _putchar('0' + rep % 10);
                    if (j < n)
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