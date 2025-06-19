#include "main.h"

void _puts(char *str)
{
	write(1, str, _strlen(str));
}