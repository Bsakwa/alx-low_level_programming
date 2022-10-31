#include <stdio.h>
#include "main.h"
/**
  * flip_bits - Returns the number of bits needed to flip
  * @n: The number
  * @m: The number to flip n to
  *
  * Return: The number of bits
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int a, bits;

	a = n ^ m;
	bits = 0;

	while (a)
	{
		bits += (a & 1);
		a >>= 1;
	}

	return (bits);
}

