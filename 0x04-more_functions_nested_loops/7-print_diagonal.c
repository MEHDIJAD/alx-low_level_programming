#include "main.h"

void print_diagonal(int n)
{
    if (n <= 0)
        return (_putchar('\n'));
    int i = 0;
    int j;
    while (i < n)
    {
        j = 0;
        while (j < i)
        {
            _putchar(' ');
            j++;
        }
        i++;
        _putchar('\\');
        _putchar('\n');
    }
    
}