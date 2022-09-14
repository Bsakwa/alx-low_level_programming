#include "main.h"
/**
 * print_last_digit - prints the last  digit of a number
 * @m: parameter
 *
 * Return: The value of the last digit
 */
int print_last_digit(int m)
{
	int b;

	b = m % 10;
	if (b < 0)
	{
		b = b * (-1);
		_putchar(b + '0');
	}
	else
	{
		_putchar(b + '0');
	}

	return (b);
}
