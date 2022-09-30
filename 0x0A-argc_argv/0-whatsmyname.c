#include <stdio.h>
#include "main.h"
/**
 * main - Prints the programs name followed by a new line
 * @argc: Arguments count
 * @argv: Char array
 *
 * Return: Always (0) Success
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}

	return (0);
}
