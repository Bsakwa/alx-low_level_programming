#include "main.h"
/**
 * _puts - Prints a string followed by a new line
 * @str: input parameter
 *
 * Return: void
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');

}
