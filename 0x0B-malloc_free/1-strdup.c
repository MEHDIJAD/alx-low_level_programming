#include "main.h"
#include <string.h>

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
 * _strdup - Returns a pointer to a newly allocated space in memory,
 *           which contains a copy of the string given as a parameter
 * @str: The string to duplicate
 *
 * Return: Pointer to the duplicated string, or NULL if str is NULL
 *         or if memory allocation fails
 */


char *_strdup(char *str)
{
	if (!str)
		return (NULL);
	size_t len = _strlen(str);
	size_t i = 0;
	char *cpy = malloc(sizeof(char) * (len + 1));

	if (!cpy)
		return (NULL);
	while (i < len && str[i])
	{
		cpy[i] = str[i];
		i++;
	}
	cpy[len] = '\0';
	return (cpy);
}
