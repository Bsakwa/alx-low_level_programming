#include "main.h"
/**
 *_get_sqrt - Tests if a valu has a root
 * @i: integer value to get root
 * @root: The value that tests the function
 *
 * Return: Square root if found, if not returns -1
 */
int _get_sqrt(int i, int root)
{
	if ((root * root) == i)
	{
		return (root);
	}
	else if (root == i / 2)
	{
		return (-1);
	}
	return (_get_sqrt(i, root + 1));
}
/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The integer parameter to get root
 *
 * Return: Square root of the number or -1 if the number has no square root
 */

int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	return (_get_sqrt(n, root));
}
