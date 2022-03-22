#include "main.h"

/**
 * print_rev - is a function that print a string in reverse 
 * @s: string input
 * return: string
 */
void print_rev(char *s)
{
	int j;
	for (j = 0; s[j] != '\0'; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
