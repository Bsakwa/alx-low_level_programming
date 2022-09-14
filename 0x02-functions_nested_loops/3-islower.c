#include "main.h"
/**
 * _islower - Checks for a lowercase character
 *
 * @c: input parameter
 * Return: 1 if c lowercase 0 otherwise return 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')

		return (1);
	else
		return (0);
}
