#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - function that print string between numbers
 * @separator: string between numbers
 * @n: number of elements
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		int x = va_arg(args, int);

		printf("%d", x);
		if (i != n - 1)
			printf("%s ", separator);
	}
	printf("\n");
	va_end(args);
}
