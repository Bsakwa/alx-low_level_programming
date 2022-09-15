#include "main.h"
/**
 * _isupper - Checks for an upper case character
 * @c: Input parameter
 *
 * Return: 1 if c is uppercase 0 otherwise
 */
int _isupper(int c)
{
	if (c <= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');

	return (c);
}
