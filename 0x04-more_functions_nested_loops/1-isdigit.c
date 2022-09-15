#include "main.h"
/**
 * _isdigit - This function checks for a digit
 *
 * @c - input parameter
 *
 * Return: Returns 1 if c is a i digit else return 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (c);
}
