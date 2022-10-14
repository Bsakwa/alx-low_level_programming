#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

void print_int(va_list args);
void print_char(va_list args);
void print_float(va_list args);
void print_string(va_list args);
void print_all(const char * const format, ...);
/**
 * print_int - Prints integers
 * @args: List of arguments pointing to the character to be printed
 */
void print_int(va_list args)
{
	int i;

	i = va_arg(args, int);
	printf("%d", i);
}
/**
 * print_char - Prints a character
 * @args: List of arguments pointing to the character to be printed
 */
void print_char(va_list args)
{
	char c;

	c = va_arg(args, int);
	printf("%c", c);
}
/**
 * print_float - Prints a float
 * @args: List of arguments pointing to the character to be printed
 */
void print_float(va_list args)
{
	float f;

	f = va_arg(args, double);
	printf("%f", f);
}
/**
 * print_string - Prints a string
 * @args: List of arguments pointing to the character to be printed
 */
void print_string(va_list args)
{
	char *str;

	str = va_arg(args, char *);

	if (str == NULL)
	{
		printf("(nil)");
	}
	printf("%s", str);
}
/**
 * print_all - Prints anything
 * @format: List of arguments passed to the function
 *
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	int j = 0;
	char *separator;
	printer_a funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(args, format);

	while (format && (*(format + i)))
	{
		j = 0;

		while (j < 4 && (*(format + i) != *(funcs[j].symbol)))
		{
			j++;
		}
		if (j < 4)
		{
			printf("%s", separator);
			funcs[j].print(args);
			separator = ", ";
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
