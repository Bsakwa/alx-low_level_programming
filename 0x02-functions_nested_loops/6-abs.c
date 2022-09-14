#include "main.h"
/**
 * _abs - Prints the absolute number of an integer
 *@t: Input parameter
 *
 * Return: Always (0)
 */
int _abs(int t)
{

	if (t < 0)
	{
		t = t * -1;
		_putchar(t);
	}
	else
	{
		_putchar(t);
	}
	return (0);
}

