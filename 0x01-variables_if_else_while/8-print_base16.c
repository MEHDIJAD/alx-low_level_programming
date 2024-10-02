/*Write a program that prints all the numbers of base 16 in lowercase, followed by a new line.
//* 0123456789abcdef
You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
All your code should be in the main function
You can only use putchar three times in your code */

#include<stdio.h>

int main()
{
    char c;
    int i;
    i = 0;
    while(i < 10)
    {
        putchar(i + '0');
        i++;
    }
    c = 'a';
    while(c <= 'f')
    {
        putchar(c);
        c++;
    }
    putchar('\n');
    
    return (0);
}