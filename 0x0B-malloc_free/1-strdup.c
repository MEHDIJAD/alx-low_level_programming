#include "main.h"
#include <string.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 *           which contains a copy of the string given as a parameter
 * @str: The string to duplicate
 *
 * Return: Pointer to the duplicated string, or NULL if str is NULL
 *         or if memory allocation fails
 */

size_t _strlen(const char *str)
{
	size_t len = 0;

	while (str[len]){
		len++;
	}
	return (len);
}


char *_strdup(char *str)
{
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
