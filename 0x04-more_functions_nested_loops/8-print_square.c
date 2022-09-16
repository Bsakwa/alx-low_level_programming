#include "main.h"
/**
 * print_square - prints a square
 * @size: Parameter
 *
 * Return: Void
 */
void print_square(int size)
{
	int z, w;

	char h = 35;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (z = 0; z < size; z++)
		{
			for (w = 0; w < size; w++)
			{
				_putchar(h);
			}
			_putchar('\n');
		}

	}
}
