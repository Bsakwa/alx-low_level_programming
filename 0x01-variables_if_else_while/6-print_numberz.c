#include <stdio.h>
/**
 * main - Entry point
 *
 * Description -'This programs prints Numberz'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 'b';

	for (a = 0; a < 10; a++)

	{
		putchar((a % 10) + '0');
	}
	putchar('\n');

	return (0);
}
