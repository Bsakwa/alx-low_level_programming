#include "main.h"
/**
 * int _islower - Checks for a lowercase character
 *
 * Return: 1 if c lowercase 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')

		return (1);
	else
		return (0);
}
