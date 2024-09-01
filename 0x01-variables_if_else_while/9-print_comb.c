/*Write a program that prints all possible combinations of single-digit numbers.

Numbers must be separated by ,, followed by a space
Numbers should be printed in ascending order
You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
All your code should be in the main function
//! You can only use putchar four times maximum in your code
//! You are not allowed to use any variable of type char
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 9-print_comb.c -o 9-print_comb
julien@ubuntu:~/0x01$ ./9-print_comb | cat -e
// TODO 0, 1, 2, 3, 4, 5, 6, 7, 8, 9$ */

#include <stdio.h>

int main(void)
{
    int i;
    i = 0;
    while (i < 10)
    {
        putchar(i + '0');
        if (i < 9)
        {
            putchar(',');
            putchar(' ');
        }
        i++;
    }
    putchar('\n');
    
    return (0);
}

