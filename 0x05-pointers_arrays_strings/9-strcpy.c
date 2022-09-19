#include "main.h"
/**
 * *_strcpy- Copies string pointed to by src
 * @dest: pointer variable
 * @src : pointer variable
 *
 * Return: Pointer to dest;
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src [i];
	}

	dest[i++] = '\0';

	return(dest);
}
