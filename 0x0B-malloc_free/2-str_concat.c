#include "main.h"
#include <stdlib.h>
/**
 * str_concat - Concatenates two strings
 * @s1: The string to concatenate
 * @s2: The string to be concatenated upon
 *
 * Return: NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int a = 0;
	int b = 0;
	int i = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (a = 0; s1[a] || s2[a]; a++)
	{
		a++;
	}

	str = malloc(sizeof(char) * i);
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
	}
	return (str);
}

