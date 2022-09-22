#include "main.h"
/**
 * _strncat - Concatenates two strings
 * @dest: Destination string
 * @src: source string
 * @n:number of bytes to be concatenated
 *
 * Return: Pointer to a string dest
 */
char *_strncat(char *dest, char *src, int n)
{

	int i = 0, b = 0;

	while (dest[i])
	{
		i++;
	}
	while (b < n && src[b])
	{
		dest[i] = src[b];
		i++;
		b++;
	}
	return (dest);
}
