#include "main.h"
/**
 * swap_int - swaps the value of two integers
 * @a: input parameter
 * !b: input parameter
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int val;
	val = *a;
	*a = *b;
	*b = val;
}
