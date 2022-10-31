#include <stdio.h>
#include "main.h"
/**
  * clear_bit - Sets the value to 0 at a given index
  * @n: The number from which to get the index from
  * @index: The index of the number
  *
  * Return: 1 if it worked
  *       :-1 if an error occurs
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
