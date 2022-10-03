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
	int a = 0;
	int b = 0;

	s1 = malloc(sizeof(char) * a + 1);

	{
		for (a = 0; s1[a]; a++)
		{
			b++;
		}
		for (a = 0; s1[a]; a++)
		{

			if (s1 == NULL)
			{
				s2[b] = s1[a];
			}
			else
			{
				return (NULL);
			}
		}
	}
	return (s1);
}

