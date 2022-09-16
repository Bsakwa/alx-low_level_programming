#include "main.h"
/**
 * print_diagonal - Draws a diagonal on the terminal
 * @n: Input parameter
 *
 * Return: Void
 */
void print_diagonal(int n)
{
	int x, y;

	char c = 92;
	char b = 32;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			for (y = 0; y < x; y++)
			{
				_putchar(b);
			}
			_putchar(c);
			_putchar('\n');
		}
	}
}
