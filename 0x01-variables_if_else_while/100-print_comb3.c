#include<stdio.h>
/**
 * main - Entry point
 *
 * Description - Prints combination of two digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int dig1, dig2;

	for (dig1 = 0; dig1 < 9; dig1++)
	{
		for (dig2 = dig1 + 1; dig2 < 10; dig2++)
		{
			if (dig1 == 9)
			continue;
			{
				putchar((dig1 % 10) + '0');
				putchar((dig2 % 10) + '0');
			}
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
