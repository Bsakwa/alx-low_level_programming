#include "main.h"
/**
 * print_triangle - Prints a triangle
 *
 * Return: Void
 */
void print_triangle(int size)
{
	int x, y, z;
	char c = 35;
	char b = 32;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else 
	{
		for (x = 0; x < size; x++)
		{
			for (z = size; z < x; --z)
			{
				_putchar(b);
			}
			for (y = 0; y <= x; y++)
			{
				_putchar(c);
			}	
			_putchar('\n');
		}
	}
}
