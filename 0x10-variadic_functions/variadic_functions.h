#ifndef VARIADIC_H
#define VARIADIC_H

#include <stdarg.h>

typedef struct print
{
	char *symbol;
	void(*print)(va_list args);

}printer_a;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int _putchar(char c);

#endif
