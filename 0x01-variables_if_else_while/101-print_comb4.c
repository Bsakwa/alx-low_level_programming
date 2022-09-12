#include<stdio.h>
/**
 * main - Entry Point
 *
 * Description - This program prints different combinations of three digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int dig1, dig2, dig3;

	for (dig1 = 0; dig1 < 10; dig1++)
	{
		for (dig2 = dig1 + 1; dig2 < 10; dig2++)
		{
			for (dig3 = dig2 + 1; dig3 < 10; dig3++)
			{
				if (dig1 == 9)
					continue;
				{
					putchar((dig1 % 10) + '0');
					putchar((dig2 & 10) + '0');
					putchar((dig3 & 10) + '0');
				}
				putchar(',');
				putchar(' ');
			}
		
		}
		putchar('\n');

	}

	return (0);
}
