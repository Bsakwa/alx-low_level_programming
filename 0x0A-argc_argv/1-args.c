#include <stdio.h>
#include "main.h"
/**
 * main - Prints the number of arguments passed into it
 * @argc: The number of arguments to be displayed
 * @argv: Character array
 *
 * Return: Always (0) Success
 */
int main(int argc, char **argv)
{
	int i = 0;

	if (argv[i])
	{
		i++;
		printf("%d\n", argc - 1);
	}
	return (0);
}
