#include "main.h"

void print_rev(char *s)
{
	int len = _strlen(s);

	while (len > 0)
		_putchar(s[len--]);
	
}