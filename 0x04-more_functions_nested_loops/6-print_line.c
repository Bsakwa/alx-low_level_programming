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

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (b = 0; b < n; b++)
		{
			_putchar(95);
		}
	}
	_putchar('\n');

}
