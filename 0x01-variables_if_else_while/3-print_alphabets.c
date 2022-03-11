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
		if (ch == 'z')
		{
			for (ch = 'A'; ch <= 'Z'; ch++)
			{
				putchar(ch);
			}	
				break;
		}
	}
	printf("\n");
	return (0);
}
