#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        int ch;

        for (ch = 'a'; ch <= 'z'; ch++)
        {
                putchar(ch);
                if (ch == 'e'& 'q')
                {
			break;}
                
        }
        printf("\n");
        return (0);
}
