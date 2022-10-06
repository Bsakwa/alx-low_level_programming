#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array
 * @nmemb: Number of elements to be allocated
 * @size: The size of each element
 *
 * Return:NULL if nmemb or size is zero. NULL if malloc fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *b;
	char *c;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	b = malloc(size * nmemb);
	if (b == NULL)
	{
		return (NULL);
	}
	c = b;
	{
		for (i = 0; i < (size * nmemb); i++)
		{
			c[i] = '\0';
		}
	}
	return (b);
}
