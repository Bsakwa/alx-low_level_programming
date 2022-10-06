#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * malloc_checked - Allocates memory using malloc
 * @b: The usigned integer to allocate memory to
 *
 * Return: Nothing
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *a, i;

	i = 0;

	a = malloc(sizeof(unsigned int) * i);
	{
		for (i = 0; a[i]; i++)
		{
			a[i] = b;
			free(a);
		}
		if (a == NULL)
		{
			exit(98);
		}
	}
	return (a);
}
