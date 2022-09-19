#include "main.h"
/**
 * puts2 - Prints every other string
 * @str: The string to be printed
 *
 * Return: 0
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str = str + 2;
	}
	_putchar('\n');
}
