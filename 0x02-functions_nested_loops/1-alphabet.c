#include "main.h"
/**
 * main - Entry Point
 *
 * Description - This program prints alphabet in lower case
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
