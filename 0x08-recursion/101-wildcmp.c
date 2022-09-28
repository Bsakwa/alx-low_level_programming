#include "main.h"
/**
 * wildcmp - Compares two strings
 * @s1:string to be compared
 * @s2:string to be compared
 *
 * Return: 1 if identical, otherwise return 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == 0 && *s2 == 0)
	{
		wildcmp(s1 + 1, s2 + 1);
	}
	return (0);
}
