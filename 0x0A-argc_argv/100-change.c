#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * main - returns the minimum change
 * @argc: The number of arguments passed
 * @argv: The array of arguments passed
 *
 * Return: Always (0) Success
 */
int main(int argc, char **argv)
{
	int cents = 0;
	int i = 1;

	while (argc <= 1)
	{
		cents = atoi(argv[i]);
		printf("%d\n", cents);
	}
	return (0);
}

