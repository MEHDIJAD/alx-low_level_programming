/*Write a program that prints the alphabet in lowercase, followed by a new line.

//! Print all the letters except q and e
You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
All your code should be in the main function
You can only use putchar twice in your code */

#include<stdio.h>

int main(void)
{
    char c;
    c = 'a';
    while(c < 'z')
    {
        if (c != 'q' && c != 'e')
            putchar(c);
        c++;
    }
    putchar('\n');
    return (0);
}