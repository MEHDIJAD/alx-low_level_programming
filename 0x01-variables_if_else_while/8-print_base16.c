#include <stdio.h>
/**
 * main - main block
 * Description: print all base 16 numbers in lowercase.
 * Return: 0
 */
int main(void)
{
	int n = '0';
	char c = 'a';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
