#include "main.h"

static void ft_putnbr(int n)
{
    if (n > 9)
        ft_putnbr(n / 10);
    _putchar((n % 10) + '0');
}
void more_numbers(void)
{
    for (size_t i = 0; i < 10; i++)
    {
        for ( size_t j = 0; j <= 14; j++)
        {
            ft_putnbr(j);
        }
        _putchar('\n');
    }
    
}
