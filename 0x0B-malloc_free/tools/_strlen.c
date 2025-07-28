#include "../main.h"

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
