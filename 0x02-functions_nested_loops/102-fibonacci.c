/*Write a program that prints the first 50 Fibonacci numbers, starting with 1 and 2, followed by a new line.

The numbers must be separated by comma, followed by a space , 
You are allowed to use the standard library*/

#include <stdio.h>

void    fibonacci(void)
{
    int i;
    unsigned long long int a, b, next;

    i = 0;
    a = 1;
    b = 0;
    while (i < 50)
    {
        next = a + b;
        b = a;
        a = next;
        printf("%llu", next);
        if (i < 49)
        {
            printf(", ");
        }
        i++;
    }
}

int main(void)
{
    fibonacci();
    return (0);
}


