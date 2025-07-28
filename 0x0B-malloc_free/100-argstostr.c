#include "main.h"

char *str_concat(char *s1, char *s2);

char *argstostr(int ac, char **av)
{
	int i = 0;
	char *cstring;

	if (ac == 0)
		return (NULL);
	cstring = NULL;
	while (i < ac)
	{
		while (av[i])
		{
			av[i] = str_concat(av[i], "\n");
			cstring = str_concat(cstring, av[i++]);
		}
	}
	return (cstring);
}

