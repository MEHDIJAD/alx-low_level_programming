#include <stdio.h>
/**
 * main - main block
 * Description: print all possible different combinations of two digits
 * separated by (,), followed by a space
 * Return: 0
*/

int main(void)
{
    int i = '0';
    int j = '1';

    while (i <= '9')
    {    
    j = '1';
        while (j <= '9')
        {
        
            if (i != j)
            {
                putchar(i);
                putchar(j);
                putchar(',');
                putchar(' '); 
            }
        j++;
        }
    i++; 
    }
return (0);
}
