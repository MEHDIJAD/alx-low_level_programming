#include "main.h"

char *_strdup(char *str)
{
	size_t len = _strlen(str);
	size_t i = 0;
	char *cpy = malloc(sizeof(char) * (len + 1));
	if( !cpy)
		return (NULL);
	while (i < len && str[i])
	{
		cpy[i] = str[i];
		i++;
	}
	cpy[len] = '\0';
	return (cpy);
}
