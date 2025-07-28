#include "main.h"

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
