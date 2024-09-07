/*Write a function that prints the alphabet, in lowercase, followed by a new line.

//* Prototype: void print_alphabet(void); */
//! You can only use _putchar twice in your code

#include <stdio.h>
#include "main.h"

void    print_alphabet(void)
{
    char c;
    c = 'a';
    while(c <= 'z')
    {
        _putchar(c);
        c++;
    }
    _putchar('\n');
}

int main(void)
{
    print_alphabet();
}