#include "main.h"
/**
 * _strncat - Concatenates two strings
 * @dest: Destination string
 * @src: source string
 *
 * Return: Pointer to a string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a;

	for (a = 0; a < n && src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	for ( ; a  < n; a++)
	{
		dest[a] = '\0';
	}
	
	return (dest);
}
