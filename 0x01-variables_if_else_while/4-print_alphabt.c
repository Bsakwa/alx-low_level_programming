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
		c != 'e';
		c != 'q';
		putchar(c);
	}
	putchar('\n');

	return (0);
}
