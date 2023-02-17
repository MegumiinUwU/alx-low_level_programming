#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: prints all possible combinations of 1digits
 * followed by a new line.
 * Return: 0
 */
int main(void)
{
        int c[10] = {0,1,2,3,4,5,6,7,8,9};
        int i;
        for ( i = 0; i <10 ; ++i)
        {

                putchar(48 + c[i]);
                if (c[i] != 9)
                {
                        putchar(',');
                        putchar(' ');
                }

        }

        putchar('\n');
        return (0);
}
