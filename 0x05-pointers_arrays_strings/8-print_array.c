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

	while (i < n)
	{
		printf("%d", a[1]);
		if (i < (n - 1))
		{
			printf(", ");
			i++;
		}
	}
	printf("\n");
}
