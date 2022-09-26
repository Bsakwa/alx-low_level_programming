#include "main.h"
/**
 * _strpbrk - Searches the string for a set of bytes
 * @s: The string to be searched
 * @accept: set of bytes to be searched for.
 *
 * Return: if a set is matched return a pointer to the matched byte
 */
char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
			if (*s == accept[a])
			{
				return (s);
			}
		}
		s++;
	}
	return (0);
}

