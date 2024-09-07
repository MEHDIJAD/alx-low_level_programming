/*Write a program that prints _putchar, followed by a new line.

The program should return 0
julien@ubuntu:~/0x02$  gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 0-putchar.c -o 0-putchar
julien@ubuntu:~/0x02$ ./0-putchar 
_putchar */

#include <stdio.h>
#include "main.h"

int main(void)
{
    char str[] = "_putchar";
    int i;

    printf("_putchar\n");
    // OR
    while (str[i] != '\0')
    {
        _putchar(str[i]);
        i++;
    }
    _putchar('\n');
    
    return (0);
}