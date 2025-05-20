#include "main.h"
#include <stdio.h>

void print_line(int n)
{
    if (n <= 0)
        return (_putchar('\n'));
    for (int i = 0; i < n; i++)
    {
        _putchar('_');
    }
    _putchar('\n');
}