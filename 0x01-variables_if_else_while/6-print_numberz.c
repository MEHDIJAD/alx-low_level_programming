#include <stdio.h>
/**
 * main - main block
 * Description: prints all single digit numbers of base 10
 * starting by 0, followed by a new line.
 * Return: 0
 */
int main(void)
{
	int n = '0';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
