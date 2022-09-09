#include <stdio.h>
/**
 * main - Entry point
 *
 * Description - This program prints lower case alphabets in reverse
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char f;

	for (f = 'z'; f >= 'a'; f--)
	{
		putchar(f);
	}
	putchar('\n');

	return (0);
}
