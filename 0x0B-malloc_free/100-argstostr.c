#include "main.h"

/**
 * argstostr - Concatenates all arguments into a single string
 * @ac: Argument count
 * @av: Argument vector
 *
 * Return: Pointer to new concatenated string with newlines
 */

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

