#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: The name to be printed
 * @f: A pointer to a function that prints the name
 *
 */
void print_name(char *name, void (*f)(char *))
{
	char *c;

	c = name;

	f(c);
}
