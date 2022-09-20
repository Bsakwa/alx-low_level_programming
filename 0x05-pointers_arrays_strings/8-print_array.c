#include "main.h"
#include <stdio.h>
/**
 * print_array - Prints elements of an array
 * @a: An array to be read
 * @n: Number of elemts to be printed
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
