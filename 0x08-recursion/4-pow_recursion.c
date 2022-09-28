#include "main.h"
/**
 * _pow_recursion - Returns value of x raised to the power y
 * @x: Value parameter
 * @y: Value parameter
 *
 * Return: if y lower than 0 return -1 otherwise return x to power of y
 */
int _pow_recursion(int x, int y)
{
	int res = x;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		res *= _pow_recursion(x, y - 1);
	}
	return (res);
}

