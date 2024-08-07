#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings with seprators
 * @separator: separator
 * @n: the numbers of arguments
 * @...: the strings to print
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	int i = n;
	char *str;
	va_list args;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(args, n);
	while (i--)
		printf("%s%s", (str = va_arg(args, char *)) ? str : "(nil)"
				, i ? (separator ? separator : "") : "\n");
	va_end(args);
}
