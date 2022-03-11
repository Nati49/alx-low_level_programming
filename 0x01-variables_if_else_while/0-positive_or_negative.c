#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

/* betty style doc for function main goes there */
int main(void)
/*this is main function */
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("98 is positive\n, n");
	} else if (n < 0)
	{
		printf("-98 is negative\n", n);
	} else
	{
		printf("0 is zero\n", n);
	}
	return (0);
}
