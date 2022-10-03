#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - Concatenates all arguments of my program
 * @ac: Checks the number of arguments
 * @av: array of arguments
 *
 * Return: Pointer to new string or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int i;

	int n = 0;

	av = malloc(sizeof(char *) * n);

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		printf("%s\n", av[i]);
	}
	return (av[i]);
}
