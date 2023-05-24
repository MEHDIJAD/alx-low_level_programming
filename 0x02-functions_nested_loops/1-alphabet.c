#include "main.h"
/**
* print_alphabet - function to print alphabets
*
*
*alpha: char with starting value 'a'
*
*
*/
void print_alphabet(void)
{
	char alpha;

	alpha = 'a';
	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}
