/*Write a function that checks for alphabetic character. */

//* Prototype: int _isalpha(int c);
// TODO Returns 1 if c is a letter, lowercase or uppercase
// TODO Returns 0 otherwise 
//* FYI: The standard library provides a similar function: isalpha. Run man isalpha to learn more. 

#include "main.h"

int _isalpha(int c)
{
    return((c >= 'a' && c <= 'z')|| (c >= 'A' && c <= 'Z'));
}