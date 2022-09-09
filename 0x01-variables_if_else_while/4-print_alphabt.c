#include <stdio.h>
/**
 * main - Entry point
 *
 * Description -'This program prints all alphabets excepts two'
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
	if (c != 'e' && c != 'q')
	{
		putchar(c);

		return (0);
	}
	putchar('\n');

	return (0);
	}
}
