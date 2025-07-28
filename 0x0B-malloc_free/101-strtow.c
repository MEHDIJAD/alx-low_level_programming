#include "main.h"

int	_count_tokens(char *str)
{
	int i;
	int tkn = 0;

	i = 0;
	while (str[i])
	{
		while (str[i] == ' ')
		i++;
		if (str[i] != ' ')
			tkn++;
		while (str[i] != ' ')
			i++;
	}
	return (tkn);		
}

char **strtow(char *str)
{
	char **sp = NULL;
	int tkn = _count_tokens;

	return (sp);
}
