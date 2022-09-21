#include "main.h"
/**
 * _strcat- Concatenates two strings
 * @dest:Destination parameter
 * @src: Source parameter
 *
 * Return: a pointer
 */
char *_strcat(char *dest, char *src)
{
	int a = 0, b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	return (dest);
}




