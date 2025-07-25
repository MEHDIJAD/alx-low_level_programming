#include "main.h"

int _strlen(char *s)
{
	int	lenght;

	lenght = 0;
	while (s[lenght])
		lenght++;
	return (lenght);
}
