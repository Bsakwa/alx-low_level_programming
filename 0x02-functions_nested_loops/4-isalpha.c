#include "main.h"
/**
 * _isalpha - Checks for an alphabetic character
 *
 * @c: Input parameter
 *
 * Return: 1 if c is a letter, lowercase or upper case otherwise returns 0
 */

int _isalpha(int c)
{
	if ((c <= 'a' && c >= 'z') || (c <= 'A' && c >= 'Z))
	{
		return (1);
	else
		return (0);
	}
}
