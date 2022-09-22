#include "main.h"
/**
 * _strncpy - Copies a string
 * @dest:destination string
 * @src:source string
 * @n:number of bytes to be copied
 *
 * Return: Copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int k = 0, j = 0;

	while (src[j])
	{
		j++;
	}
	while (k < n && src[k])
	{
		dest[k] = src[k];
		k++;
	}
	while (k < n)
	{
		dest[k] = '\0';
		k++;
	}

	return (dest);
}
