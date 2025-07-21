#ifndef MAIN_H
# define MAIN_H

#include <string.h>
#include <unistd.h>


void _putchar(int c)
{
    write(1, &c, 1);
}

char *_strcat(char *dest, char *src);

#endif