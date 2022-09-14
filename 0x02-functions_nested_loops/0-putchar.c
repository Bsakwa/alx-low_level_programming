#include<unistd.h>
#include "main.h"

/**
 * _putchar - Prints char c to std output
 *
 * main - Entry point
 *
 * Description - Uses the function to ouput
 *
 * Return: Always 0 (success)
 */

int main(void)
{

	char ch[8] = "_putchar";
	int i = 0;
	char c;

	while (i <= 8)
	{
		c = ch[i];
		_putchar(c);
		i++;
	}
	_putchar('\n');

	return (0);
}

int _putchar(char c)
	/* Description */
{
	return (write(1, &c, 1));
}
