#include <stdio.h>
/**
 * _atoi - Converts a string to an integer
 * @s: The string to be converted
 *
 * Return: Always zero
 */
int _atoi(char *s)
{
	int sign = 1;
	int num = 0;

	if (*s == '-')
	{
		sign = -1;
	}
	else if (*s >= '0' && *s <= '9')
	{
		num = num * 10 + *s - '0';
	}
	else if (num > 0)
	{
		return (num * sign);
	}
	return (0);
}
