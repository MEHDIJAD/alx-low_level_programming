#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	int mul;

	if (ac == 3)
	{
		mul = atoi(av[1]) * atoi(av[2]);
		printf("%d\n", mul);
	}
	else
		return (printf("Usage: ./mul <arg> <arg>\n"), EXIT_FAILURE);
	return (EXIT_SUCCESS);
}
