#include <stdio.h>
#include <stdlib.h>

int main(int ac __attribute__((unused)), char **av)
{
	int i = -1;

	while (av[++i])
		printf("%s\n", av[i]);

	return (EXIT_SUCCESS);
}
