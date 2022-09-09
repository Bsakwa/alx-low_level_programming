#include <stdio.h>
/**
 * main - Entry point
 *
 * Description - Turning decimals to hexadecimals
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;
	char l;

	for (c = 0; c <= 9; c++)
	{
		putchar((c % 10) + '0');
	}
	for (l = 'a'; l <= 'f'; l++)
	{
		putchar(l);
	}
	putchar('\n');

	return (0);
}

