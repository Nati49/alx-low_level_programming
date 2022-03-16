#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	i = 0;
	
	while (i < 10) /*i must increase to set alimit for the loop i++*/
	{
		putchar(i);
	}
	
	printf("Infinite loop avoided! \\o/\n");
	/*unnecessary input*/
	
	return (0);
}
