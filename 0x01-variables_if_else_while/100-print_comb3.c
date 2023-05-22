#include <stdio.h>
/**
 * main -main block
 * Description: print all the possible combinations of two digit numbers
 * separated by ',', follewd by a space.
 * Return: 0
*/
int main() {
    int i = 0;
    int j = 0;
    while (i < 10) {
        j = 0;
        while (j < 10) {
            if (i != j) {
                putchar(i + '0');
                putchar(j + '0');
                putchar(',');
                 putchar(' ');
            }
            j++;
        }
        i++;
    }
    return 0;
}
