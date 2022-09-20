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
	int index = 0;

	if (*s == '-')
	{
		sign = -1;
		index = 1;
	}
	while (s[index] != '\0')
	{
		if (s[index] >= '0' && s[index] <= '0')
		{
			num = num * 10 + s[index] - '0';
		}
		else
		{
			break;
		}
		index++;
	}
	num = num * sign;

	return (0);
}
