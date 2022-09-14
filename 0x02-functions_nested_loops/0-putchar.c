#include "main.h"
/**
 * main - Entry point
 *
 * Description - This program returns the word _putchar
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char c[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
	return (0);
}
