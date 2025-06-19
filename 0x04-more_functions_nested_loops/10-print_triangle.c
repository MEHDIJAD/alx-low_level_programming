#include "main.h"

void print_triangle(int size)
{
	int	i;
	int j;
	int temp;

	if (size <= 0)
	{
		_putchar('\n');
		return ;
	}
	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size - i - 1)
		{
			_putchar(' ');
			j++;
		}
		temp = i;
		while(temp >= 0)
		{
			_putchar('#');
			temp--;
		}
		i++;
		_putchar('\n');
	}
}