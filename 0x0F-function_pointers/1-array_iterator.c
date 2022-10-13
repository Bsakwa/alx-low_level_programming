#include "function_pointers.h"
/**
 * array_iterator - Executes a function given as a parameter element
 * @size: The size of the array
 * @action: A pointer to the function we need to use
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{

	if (action == NULL || array == NULL)
	{
		return;
	}
	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
