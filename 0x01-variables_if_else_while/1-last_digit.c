/*The output of the program should be:
The string Last digit of, followed by
n, followed by
the string is, followed by
if the last digit of n is greater than 5: the string : and is greater than 5
if the last digit of n is 0: the string and is 0
if the last digit of n is less than 6 and not 0: the string  : and is less than 6 and not 0
followed by a new line
*/
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;
	if(last > 5)
		printf("Last digit of %d is %d and is greater than 5", n, last);
	else if (last = 0)
		printf("Last digit of %d is %d and is 0", n, last);
	else if (last < 6 && last != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0", n, last);
	printf("\n");
	
	return (0);
}