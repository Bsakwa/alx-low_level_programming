#include "function_pointers.h"
/**
 * int_index - Searches for an integer
 * @size: The number of the elements of an array
 * @cmp: Pointer to a function that is used to compare values
 *
 * Return: -1 if no element matches and size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp == NULL || array == NULL)
	{
		return (-1);
	}
	for (i =0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
