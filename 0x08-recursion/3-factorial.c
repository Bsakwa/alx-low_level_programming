#include "main.h"
/**
 * factorial - returns the factorial of any given number
 * @n: Value parameter
 *
 * Return: Factorial of int n
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
