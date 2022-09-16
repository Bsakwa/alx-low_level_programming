#include "main.h"
/**
 * print_line - draws a straight line
 * @n: Number of times _ is entered
 *
 * Return: n
 */
void print_line(int n)
{
	int b;

	char c= '_';

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (b = 0; b < n; b++)
		{
			_putchar(c);
		}
	}
	_putchar('\n');

}
