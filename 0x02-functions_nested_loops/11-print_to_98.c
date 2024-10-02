/*Write a function that prints all natural numbers from n to 98, followed by a new line.

Prototype: void print_to_98(int n);
Numbers must be separated by a comma, followed by a space
Numbers should be printed in order
The first printed number should be the number passed to your function
The last printed number should be 98
You are allowed to use the standard library */

#include "main.h"
#include <stdio.h>

void print_to_98(int n)
{
    while (n < 98)
        {
            printf("%d, ", n);
            n++;
        }
    while (n > 98)
        {
            printf("%d, ", n);
            n--;
        }
        printf("98");
        printf("\n");
}