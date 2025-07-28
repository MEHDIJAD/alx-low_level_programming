#include "main.h"

/**
 * _strlen - Return the length of the string passed to it
 * @str: The string to evaluate
 *
 * Return: The length of the string
 */

size_t _strlen(const char *str)
{
	size_t len = 0;

	while (str[len])
	{
		len++;
	}
	return (len);
}

/**
 * str_concat - Concatenates two strings into a newly allocated memory space
 * @s1: The first string
 * @s2: The second string
 *
 * Return: Pointer to the newly allocated string containing s1 followed by s2,
 *         or NULL if memory allocation fails
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int ci;
	size_t biglen;
	char *concat_str;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	biglen = _strlen(s1) + _strlen(s2);
	concat_str = malloc(sizeof(char) * (biglen + 1));
	if (!concat_str)
		return (NULL);
	ci = 0;
	while (s1[i])
		concat_str[ci++] = s1[i++];
	i = 0;
	while (s2[i])
		concat_str[ci++] = s2[i++];
	concat_str[ci] = '\0';
	return (concat_str);
}

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

