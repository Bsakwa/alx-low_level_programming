#include <stdio.h>
#include "3-calc.h"
/**
 * op_add - Adds two integers
 * @a: integer one
 * @b: integer two
 *
 * Return: The sum of the two
 */
int op_add(int a, int b)
{
	int sum;

	sum = a + b;

	return (sum);
}
/**
 * op_sub - Returns the difference of two integers
 * @a: integer one
 * @b: Integer two
 *
 * Return: The differnce between a and b
 */
int op_sub(int a, int b)
{
	int diff;

	diff = a - b;

	return (diff);
}
/**
 * op_mul - Computes the product of two given integers
 * @a: Integer one
 * @b: Integer two
 *
 * Return: The product of the two
 */
int op_mul(int a, int b)
{
	int mul;

	mul = a * b;

	return (mul);
}
/**
 * op_div - Displays the result of dividing a by b
 * @a: integer one
 * @b: integer two
 *
 * Return: The result after division
 */
int op_div(int a, int b)
{
	int div;

	div = a / b;

	return (div);
}
/**
 * op_mod - Computes the remainder of the division of a by b
 * @a: integer one
 * @b: integer two
 *
 * Return: Mod
 */
int op_mod(int a, int b)
{
	int mod;

	mod = a % b;

	return (mod);
}

