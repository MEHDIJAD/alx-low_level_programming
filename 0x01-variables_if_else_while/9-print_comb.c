#include <stdio.h>
/**
 * main - main block
 * Description: print all the possible combination of single-digit numbers
 * separated by ',', follwed by a space.
 * Return: 0
 */
int main(void)
{
	int n = '0';
	
	while (n <= '9')
	{
		putchar(n);

		if (n < '9')
		{
			putchar(',');
			putchar(' ');
		}		
		n++;
	}
	putchar('\n');
	return (0);
}
