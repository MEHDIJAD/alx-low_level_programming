#include "main.h"
#include <stdio.h>
// include <ctype.h> to add function islower, short for Character Type 


int main(void)
{
    int r;

    r = _islower('H');
    _putchar(r + '0');
    r = _islower('o');
    _putchar(r + '0');
    r = _islower(108);
    _putchar(r + '0');
    _putchar('\n');
    // OR
    //printf("%d", islower('H'));
    return (0);
}