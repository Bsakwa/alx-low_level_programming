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
	char c = 95;

	for (b = 0; b < n; b++)
	{
		if (n > 0)
		{
			_putchar(c);
		}
		else
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
