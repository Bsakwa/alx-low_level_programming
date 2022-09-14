#include "main.h"
/**
 * times_table - prints the 9 times table
 *
 * Return: Void
 */
void times_table(void)
{
	int i = 0;
	int j;
	int k;

	while (i < 10)
	{
		j = 0;
		{
			while (j < 10)
			{
				k = i * 9;
				_putchar(k);
				j++;
			}

		}
	}
}
