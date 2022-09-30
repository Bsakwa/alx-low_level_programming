#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - Adds positive numbers
 * @argc: The number of arguments passed
 * @argv: The arguments array
 *
 * Return: Always (0) Success
 */
int main(int argc, char **argv)
{
	int i;
	int sum = 0;
	char c = 48;
	char d = 57;

	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) >= c && atoi(argv[i]) <= d)
		{
			sum += atoi(argv[i]);
			printf("%d\n", sum);
		}
		else
		{
			printf("Error\n");
		}
	}
	return (0);
}

