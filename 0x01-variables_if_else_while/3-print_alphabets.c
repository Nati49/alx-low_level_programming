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
	}
	for (ch= 'A';ch <= 'Z'; ch++)
	{
		pitchar(ch);
	}
	printf("\n");
	return (0);
}
