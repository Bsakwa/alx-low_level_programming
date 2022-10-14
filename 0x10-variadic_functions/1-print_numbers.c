#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - Prints numbers followed by a new line
 * @separator: String character between the numbers to diplay
 * @n: The number parameters to be diplayed
 *
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, num;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		printf("%d", num);

		if (i != (n - 1) && separator!= NULL)
		{
			printf("%s", separator);
		}
		else if (separator == NULL)
		{
			printf("(nil)");
		}
	}
	printf("\n");
	va_end(args);
}


