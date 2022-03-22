#include "main.h"

/**
 *_puts: is afunction that returns a string
 *@str; string input
 *return: string
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
