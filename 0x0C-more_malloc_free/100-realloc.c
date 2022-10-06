#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _realloc - Reallocates a memory block
 * @ptr: Pointer to the previously allocation
 * @old_size: Size in  bytes of allocated space(ptr)
 * @new_size: New size of the new memory block
 *
 * Return: NULL or pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *c;


	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		c = malloc(new_size);
	}
	return (c);
}
