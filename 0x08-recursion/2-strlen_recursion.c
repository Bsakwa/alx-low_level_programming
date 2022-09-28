#include "main.h"
/**
 * _strlen_recursion - Returns a length of a string
 * @s: The string to get the length from
 *
 * Return: Legth of string
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;
		i += _strlen_recursion(s + 1);
	}
	return (i);
}
