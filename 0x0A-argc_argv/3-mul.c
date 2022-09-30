#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * main - Multiplies two numbers
 * @argc: Counts of arguments passed
 * @argv: Argumentss array
 *
 * Return: Always (0) Success
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	int mul = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		mul = num1 * num2;
		printf("%d\n", mul);
	}
	return (0);
}
