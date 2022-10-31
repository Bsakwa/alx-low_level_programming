#include <stdio.h>
#include "main.h"
/**
  * binary_to_uint - Turns binary into an unsigned int
  * @b: A pointer to the string to be converted
  *
  * Return: 0 if b is null or char not O or 1,
  *       :  Otherwise the converted number
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int len;
	int val = 1;

	if (b == NULL)
		return (0);

	for (len = 0; b[len];)
		len++;

	for (len -= 1; len >= 0; len--)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}
		num += (b[len] - '0') * val;
		val *= 2;
	}
	return (num);
}

