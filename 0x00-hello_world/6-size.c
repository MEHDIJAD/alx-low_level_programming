/*Write a C program that prints the size of various types on the computer it is compiled and run on.

You should produce the exact same output as in the example
Warnings are allowed
Your program should return 0
You might have to install the package libc6-dev-i386 on your Linux to test the -m32 gcc option 
example:
Size of a char: 1 byte(s)
Size of an int: 4 byte(s)
Size of a long int: 4 byte(s)
Size of a long long int: 8 byte(s)
Size of a float: 4 byte(s) */

#include <stdio.h>

int main(void)
{
    printf("size of a char      : %d byte(s)\n", sizeof(char));
    printf("size of an int      : %d byte(s)\n", sizeof(int));
    printf("size of a long int  : %d byte(s)\n", sizeof(long));
    printf("size of a long long : %d byte(s)\n", sizeof(long long));
    printf("size of a float     : %d byte(s)\n", sizeof(float));
}

