#include "main.h"
/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: The string to be checked
 *
 * Return: @ if string is a palindrome 0 0therwise
 */

int is_palindrome(char *s)
{
	if (*s)
	{
		is_palindrome(s + 1);
	}
	return (0);
}


