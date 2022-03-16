#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");/*":"must be "*/

	i = 0;

	while (i < 10)/*i must increase  to make a limit */
	{
		putchar(i);
	}
	printf("Infinite loop avoided! \\o/\n");
	return (0);
}
