#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - function that sums any numbers of arguments
 * @n: numbers of arguments
 * Return: integer
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	int s = 0;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		s += va_arg(args, int);
	}
	va_end(args);

	return (s);
}
