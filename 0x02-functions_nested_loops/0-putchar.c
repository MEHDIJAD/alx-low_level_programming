#include <stdio.h>
/**
 * main - main block
 * Description: print _putchar.
 * Return: 0
 */
int main(void)
{
       	char c[] = "_putchar";
        int i = 0;

        while (i < 8)
        {
		putchar(c[i]);
                i++;
	}
	putchar('\n');
	return (0);
}
