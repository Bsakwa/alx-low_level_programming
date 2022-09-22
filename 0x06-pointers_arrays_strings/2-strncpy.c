#include "main.h"
/**
 * _strncpy - Copies a string
 * @dest
 * @src
 * @n
 *
 * Return: Copied string
 */
char *_strncpy(char *dest, char *src, int n)
{

	for (n = 0; dest[n] != '\0'; n++)
	{
		dest[n] = src[n];
	}

	dest[n] = '\0';

	return (dest);
}
