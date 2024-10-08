#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int     _putchar(char c);
int     _islower(int c);
int     _isalpha(int c);
int     print_sign(int n);
int     _abs(int n);
int     print_last_digit(int n);
void    jack_bauer(void);
void    times_table(void);
int     add(int a, int b);
void    print_to_98(int n);
void    print_times_table(int n);

#endif /* MAIN_H */