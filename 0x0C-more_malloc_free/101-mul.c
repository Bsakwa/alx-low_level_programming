#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - multiplies numbers
 *@argc: the number of arguments
 *@argv:The arguments
 * Return: The multiples of numbers
 */
int main(int argc, char **argv)
{
	int i;
	int mul, num1, num2;

	for (i = 0; i < argc; i++)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		mul = num1 * num2;
	}
	return (mul);
}
