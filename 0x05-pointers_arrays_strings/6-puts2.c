#include "main.h"

void puts2(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str += 2;
	}
	
}