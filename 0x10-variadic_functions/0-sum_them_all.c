#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - Returns the sum of all it's parameters
 * @n: arguments of type const unsigned int
 *
 * Return: sum of all the parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		if (n == 0)
		{
			return (0);
		}
		else
		{
			sum += va_arg(args, int);
		}
		va_end(args);
	}
	return (sum);
}
