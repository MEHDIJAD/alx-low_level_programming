#include "main.h"

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
