#include "main.h"
/**
 * puts_half - Prints half a string
 * @str: The string to be changed
 *
 * Return: Void
 */
void puts_half(char *str)
{
	int i;

	for (i = 0; *str != '\0'; str++)
	{
		i = i / 2;
		i += 1;

		while (str[i])
		{
			str++;
			_putchar(*str);
		}
		_putchar('\n');
	}
}

