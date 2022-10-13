#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints opcodes of its main function
 * @argc: Number of arguments
 * @argv: The array of arguments
 *
 * Return: Always (0) Success
 */
int main(int argc, char **argv)
{
	int bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (argv[1] < 0)
	{
		printf("Error\n");
		exit(2);
	}
	bytes = atoi(argv[1]);

	return (bytes);
}
