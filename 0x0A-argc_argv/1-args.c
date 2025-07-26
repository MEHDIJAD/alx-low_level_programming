#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av __attribute__((unused)))
{
	printf("%d\n", ac - 1);

	return (EXIT_SUCCESS);
}
