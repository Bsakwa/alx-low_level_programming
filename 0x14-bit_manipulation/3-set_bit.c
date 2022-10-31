#include <stdio.h>
#include "main.h"
/**
  * set_bit - Sets the value to 1 at a given index
  * @n: Pointer to the number from which to obtain the index
  * @index: The index to be set
  *
  * Return:  1 if it works
  *       : -1 if an error occurs
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	if  (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
