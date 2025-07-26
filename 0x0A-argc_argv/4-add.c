#include <stdio.h>
#include <stdlib.h>

static int _isdigit(int c)
{
    return (c >= '0' && c <= '9');
}

static int _isnumber(char *arg)
{
	int i = -1;
	
	while (arg[++i])
	{
		if (!_isdigit(arg[i]))
			return (0);
	}
	return (1);	
}

int main(int ac, char **av)
{
	int add = 0;

	if (ac > 1)
	{
		int i = 0;
		while (av[++i])
		{
			if (_isnumber(av[i]))
				add += atoi(av[i]);
			else
				return (printf("Error\n", EXIT_FAILURE));
		}
		printf("%d\n", add);
	}
	else
		return (printf("%d\n",add), EXIT_FAILURE);
	return (EXIT_SUCCESS);
}
