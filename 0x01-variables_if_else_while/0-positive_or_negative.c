/*This program will assign a random number to the variable n each time it is executed.
Complete the source code in order to print whether the number stored in the variable n is positive or negative.

The variable n will store a different value every time you will run this program
You don’t have to understand what rand, srand, RAND_MAX do. Please do not touch this code
The output of the program should be:
The number, followed by
if the number is greater than 0: is positive
if the number is 0: is zero
if the number is less than 0: is negative
followed by a new line*/

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main(void)
{
	int n;

	srand(time(0)); // so my programme gives every time a different seed
	n = rand() - RAND_MAX / 2; // RAND_MAX = 32767 
	if (n > 0)
        printf("%d is positive\n", n);
    else if (n < 0)
        printf("%d is negative\n", n);
    else
        printf("%d is zero\n",n);
	
    return (0);
}