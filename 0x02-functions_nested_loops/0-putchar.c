#include "main.h"
/**
 * main - entry block
 * @void: no argument
 * Return: 0
 **/
int main(void)
{
	char x[] = "_putchar";

	int n;

	for (n = 0; n < 8; n++)
	{
		_putchar(x[n]);
	}
	_putchar('\n');
	return (0);
}
