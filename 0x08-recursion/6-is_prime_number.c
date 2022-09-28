#include "main.h"
/**
 * _get_prime - Checks whether a number is divisible
 * @i: Integer input
 * @prime: a divisor
 * Return: 1 if n is a prime number. 0 if not
 */
int _get_prime(int i, int prime)
{
	if (i % prime == 0)
	{
		return (0);
	}
	else if (prime == i / 2)
	{
		return (1);
	}
	return (_get_prime(i, prime + 1));
}
/**
 * is_prime_number - Checks whether a number is prime or not
 * @n:The number input
 *
 * Return: 1 if prime 0 if not
 */
int is_prime_number(int n)
{
	int i = 2;

	if (n <= 1)
	{
		return (0);
	}
	else if (n >= 2 && n <= 3)
	{
		return (1);
	}
	return (_get_prime(n, i));
}
