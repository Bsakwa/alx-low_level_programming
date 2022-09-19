#include "main.h"
/**
 * _strlen - Returns the value of a string
 * @s: Input parameter
 *
 * Return: always (0)
 */
int _strlen(char *s)
{
	int b;

	for (b = 0; *s != '\0'; s++)
	{
		b++;
	}
	return (b);
}
