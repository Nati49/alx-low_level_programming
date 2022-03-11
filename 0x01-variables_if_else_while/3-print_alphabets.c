#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;
	int up;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
		if (ch == 'z')
		{
	        for (up= 'A';up <= 'Z'; up++)
		{	
	
		pitchar(up);
		}
		}
	
	}
	printf("\n");
	return (0);
}
