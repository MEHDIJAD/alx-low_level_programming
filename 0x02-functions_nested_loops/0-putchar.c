#include <stdio.h>
/**
 * main - main block
 * Description: print _putchar
 * Return: 0
 */
int main(void)
{
	char c[9] = "_putchar";
	int i = 0;

	while (i < 9)
	{
		putchar(c[i]);
		i++;
	}
	putchar('\n);
	return (0);
}
