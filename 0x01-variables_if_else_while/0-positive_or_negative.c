#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/**This program generates a number and returns value*/

	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
		return (0);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
		return (0);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
		return (0);
	}
	else
	{
		return (0);

	}


}
