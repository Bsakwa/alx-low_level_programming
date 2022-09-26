#include <stdio.h>
#include "main.h"
/**
 * _diagsums - Prints the sum of two diagonals 
 * @a: Value parameter
 * @size: Value Parameter
 *
 * Return: Nothing
 */
void print_diagsums(int *a, int size)
{
	int b, sum1 = 0, sum2 = 0;

	for (b = 0; b < size; b++)
	{
		sum1 += a[b];
		a += size;
	}

	a -= size;

	for (b = 0; b < size; b++)
	{
		sum2 += a[b];
		a -= size;
	}

	printf("%d, %d\n", sum1, sum2);
}
