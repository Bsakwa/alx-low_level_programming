#include "main.h"
/**
 * print_diagonal - Draws a diagonal on the terminal
 * @n: Input parameter
 *
 * Return: Void
 */
void print_diagonal(int n)
{
	int x;

	char c = 'b';

	if ( n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x != n; x++)
		{
			_putchar(c);
		}
	}
	_putchar('\n');
}
