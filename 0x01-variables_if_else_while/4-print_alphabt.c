#include <stdio.h>
/**
 * main - main block
 * Description: print the alphabite in lowercase excepte q and s
 * Return: 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
		{
			putchar(c);
		}
		c++;

	}
	putchar('\n');
	return (0);
}
