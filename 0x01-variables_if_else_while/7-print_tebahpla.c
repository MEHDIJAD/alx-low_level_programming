#include <stdio.h>
/**
 * main - main block
 * Description: print the alphabit in lowercase in reverse.
 * Return: 0
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}	

