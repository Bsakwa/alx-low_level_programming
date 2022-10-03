#include "main.h"
#include <stdlib.h>
/**
 * _strdup - Returns a pointer to a newly allocated space in memory
 * @str: The string to be copied
 *
 * Return: Pointer,NULL if str is NULL or insufficient memory
 */
char *_strdup(char *str)
{
	int a, b;
	char *c;

	if (str == NULL)
	{
		return (NULL);
	}
	for (a = 0; str[a]; a++)
	{
		b++;
	}

	c = malloc(sizeof(char) * (b + 1));

	if (c == NULL)
	{
		return (NULL);
	}
	for (a = 0; str[a]; a++)
	{
		c[a] = str[a];
		c[b] = '\0';
	}
	return (c);
}


