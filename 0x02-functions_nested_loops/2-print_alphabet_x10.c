/*Write a function that prints 10 times the alphabet, in lowercase, followed by a new line.

//* Prototype: void print_alphabet_x10(void); */
//! You can only use _putchar twice in your code

#include "main.h"

void print_alphabet_x10(void)
{
    int i;
    int c;

    i = 0;
    while (i < 10)
    {
        c = 'a';
        while (c <= 'z')
        {
            _putchar(c);
            c++;
        }
        _putchar('\n');
        i++;
    }
}

int main(void)
{
    print_alphabet_x10();
}