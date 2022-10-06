#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - Concatenates two strings
 * @s1: The string to concatenate
 * @s2: The string to be concatenated upon
 * @n: The size to be allocated for each string
 *
 * Return: Pointer or NULL if function fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;

	unsigned int a = 0;
	unsigned int b = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (a = 0; s1[a]; a++)
	{
		n++;
	}
	str = malloc(sizeof(char) * n + 1);
	{
		if (str == NULL)
		{
			return (NULL);
		}
		for (a = 0; s1[a]; a++)
		{
			str[b++] = s1[a];
		}
		for (a = 0; s2[a]; a++)
		{
			str[b++] = s2[a];
		}
		str[n] = '\0';
	}
	return (str);
}


