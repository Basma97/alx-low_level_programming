#include "main.h"
/**
 * _puts - program
 * @str: parameter
 * _putchar prints new line
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
