#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars and initializes it with a char
 * @size: size of array to be created
 * @c:The character to be initialized
 *
 * Return: NULL if size 0, pointers to the array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(sizeof(char) * size);

	for (i = 0; i < size; i++)
	{
		if (array == 0)
		{
			return (NULL);
		}
		else
		{
			array[i] = c;
		}
	}
	return (array);
}
