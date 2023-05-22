#include <stdio.h>
/**
 * main - main block
 * Description: print all single digit numbers of base 10
 * starting by 0, follwed by new line.
 * Return: O
 */
int main(void)
{
	int n = 0;

	while (n < 10)
	{
	printf("%i", n);
	n++;
	}
	printf("\n");
	return (0);
}
