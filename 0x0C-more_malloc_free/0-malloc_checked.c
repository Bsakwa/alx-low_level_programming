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
	void *a = malloc(b);

	if (a == NULL)
	{
		exit(98);
	}
	return (a);
}
