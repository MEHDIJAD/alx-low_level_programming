#include "main.h"

void    _putstr(const char *string)
{
    for (int i = 0; string[i]; i++)
    {
        _putchar(string[i]);
    }
    
}

void    _putnumber(int n)
{
    if (n > 9)
        _putnumber(n / 10);
    _putchar(n % 10 + '0');
}

int main(void)
{
    for (int i = 1; i <= 100; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
            _putstr("FizzBuzz ");
        else if (i % 3 == 0)
            _putstr("Fizz ");
        else if (i % 5 == 0)
            _putstr("Buzz ");
        else
        {
            _putnumber(i);
            _putchar(' ');
        }
    }
    _putchar('\n');
}