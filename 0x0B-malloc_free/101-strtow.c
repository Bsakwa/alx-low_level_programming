#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * strtow - Splits a string into words
 * @str:The string to be split
 *
 * Return: NULL if str is NULL or when function fails
 */
char **strtow(char *str)
{
	int a = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	str = malloc(sizeof(char *) * a);
	{
		for (a = 0; str[a]; a++)
		{
			a++;
		}
		printf("%s",str);
	}
	return (0);
}
