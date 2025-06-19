#include "main.h"

void rev_string(char *s)
{
	int		i;
	int		len;
	char	temp;

	i = 0;
	len = _strlen(s) - 1;
	while (i < len)
	{
		temp = s[i];
		s[i] = s[len];
		s[len] = temp;
		len--;
		i++;
	}
}