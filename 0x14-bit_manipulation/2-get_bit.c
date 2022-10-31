#include <stdio.h>
#include "main.h"
/**
  * get_bit - Returns the value of a bit at a given index
  * @n: The number from which to obtain the bit from
  * @index: The index of the bit to be returned
  *
  * Return: Value at the bit of index index
  *       : -1 if an error occured
  */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
