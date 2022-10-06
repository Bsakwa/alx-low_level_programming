#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * array_range - Creates an array of integers
 * @min:First element of the array
 * @max: Second element of the array
 *
 * Return: NULL if min >max or if malloc fails. Otherwise pointer to new array
 */
int *array_range(int min, int max)
{
	int *b;
	int a;
	int c;

	if (min > max)
	{
		return (NULL);
	}
	c = max - min + 1;

	b = malloc(sizeof(int) * c);

	if (b == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < c; a++)
	{
		b[a] = min++;
	}
	return (b);
}

