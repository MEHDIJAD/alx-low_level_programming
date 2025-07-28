#include "main.h"

/**
 * create_array - Creates an array of chars and initializes it with a specific char
 * @size: The size of the array to create
 * @c: The character to initialize the array with
 *
 * Return: Pointer to the array, or NULL if size is 0 or malloc fails
 */

char *create_array(unsigned int size, char c)
{
	char			*array;
	unsigned int	i;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);
	if (!array)
		return (NULL);
	i = 0;
	while (i < size)
	{
		array[i++] = c;
	}
	return (array);
}
