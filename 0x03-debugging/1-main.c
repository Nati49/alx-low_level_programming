#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
        int i;

        printf("Infinite loop incoming :(\n");/*":"must be"*/

        i = 0;

        while (i < 10)/*i must increase to set alimit for the loop*/
        {
                putchar(i);
        }

        printf("Infinite loop avoided! \\o/\n");/*"0" unnecessary input*/

        return (0);
}
