#include <stdio.h>
/**
 * main - main block
 * Description: a fauction that print the alphabit in lowercase
 * follewd by a new line.
 * Return: 0
*/

	void print_alphabet(void)
	{	
   		char c = 'a';
   		while (c <= 'z')
   
   		{	
    			putchar(c);
    			c++;
   		} 
   		putchar('\n');
   	return;
	}

	void print_alphabet(void);

	int main(void)
	{	
    
	print_alphabet();

	return (0);
	}

