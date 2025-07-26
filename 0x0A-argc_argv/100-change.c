#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	int coint_array[5] = {25, 10, 5, 2, 1};
	int ncoints = 0;
	int cents;
	int i;

	if (ac == 2)
	{
		i = 0;
		cents = atoi(av[1]);
		while (cents > 0 && i < 5)
		{
			if (cents >= coint_array[i])
			{
				cents -= coint_array[i];
				ncoints++;
				printf("%d\t%d\n",cents, ncoints);
			}
			else
				i++;
		}
		printf("%d\n", ncoints);
	}
	else
		return (printf("Error\n"), EXIT_FAILURE);
	return (EXIT_SUCCESS);
}

