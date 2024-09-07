//! Write a function that prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.

//* Prototype: void jack_bauer(void);

#include "main.h"

void    jack_bauer(void)
{
    int hours;
    int minutes; // minutes

    hours = 0;
    while (hours < 24)
    {
        minutes = 0;
        while (minutes < 60)
        {
            _putchar((hours / 10) + '0');
            _putchar((hours % 10) + '0');
            _putchar(':');
            _putchar((minutes / 10) + '0');
            _putchar((minutes % 10) + '0');
            _putchar('\n');
            minutes++;
        }
        hours++;
    }
}
