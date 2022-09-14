#include <unistd.h>
#include<stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Description - Prints character c to std output
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
{
	return (write(1, &c, 1));
}
