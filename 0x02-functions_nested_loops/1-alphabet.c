#include<stdio.h>
#include "main.h"
/**
 * main - entry point
 *
 * Description - This program displays the alphabets
 *
 * Return: Always 0 (success)
 */

void print_alphabet(void);

int main(void)
{

	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}

