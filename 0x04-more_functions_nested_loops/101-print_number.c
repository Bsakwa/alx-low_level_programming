#include <main.h>
/**
 *print_number - prints an integer
 *@n: parameter input
 * Return: void
 *
 */
void print_number(int n)
{
	_putchar((n % 10) + '0');
	_putchar('\n');
}
