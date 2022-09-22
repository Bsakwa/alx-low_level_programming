#include "main.h"
/**
 * cap_string - Capitalizes all words of a string
 * @p: string to capitalize
 *
 * Return: string that has been capitalized
 */
char *cap_string(char *p)
{
	int i;

	while (p[i])
	{
		if (p[i] >= 97 && p[i] <= 122)
		{
			p[i] -= 32;
		}
		i++;
	}
	return (p);
}
