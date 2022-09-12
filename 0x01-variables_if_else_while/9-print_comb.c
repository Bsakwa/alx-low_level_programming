#include<stdio.h>
/**
 * main - entry point
 *
 * Description -  Prints all possible combinations of single digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9;  num++)
	{
		putchar((num % 10) + '0');
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
