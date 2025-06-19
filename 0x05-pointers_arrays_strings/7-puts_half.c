#include "main.h"


void puts_half(char *str)
{
	int length_of_the_string = _strlen(str);
	int n;
	
	//* (condition) ? expression_if_true : expression_if_false;
	
	n = (length_of_the_string % 2 == 0)
		? (length_of_the_string / 2)
		: ((length_of_the_string - 1) / 2);

	while (n < length_of_the_string)
		_putchar(str[n++]);	
}