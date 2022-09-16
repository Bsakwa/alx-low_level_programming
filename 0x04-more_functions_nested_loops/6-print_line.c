#include "main.h"
/**
 * print_line - draws a straight line
 *
 * Return: n
 */
void print_line(int n)
{

	char c;

	c = '_';

	if (n > 0)
	{
		_putchar(c);
	}
	else
	{
		_putchar('\n');
	}

}
