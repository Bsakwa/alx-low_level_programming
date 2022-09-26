#include "main.h"
/**
 * _strchr - Locates a character in a string
 *@s: string parameter
 *@c: The character to be searched
 *
 * Return: Pointer to dest
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i); i++)
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
	}
	if (*(s + i) == c)
	{
		return (s + i);
	}

	return (0);
}
