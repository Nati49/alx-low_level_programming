#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

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
		printf("%d is positive\n");
	} else if (n < 0)
	{
		printf("%d is negative\n");
	} else
	{
		printf("%d is zero\n");
	}
	return (0);
}
