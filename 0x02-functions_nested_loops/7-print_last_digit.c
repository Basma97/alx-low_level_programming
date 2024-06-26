#include "main.h"
/**
 * print_last_digit - function return the last digit
 * @a: parameter required
 * Return: return the last digit of a number
 */

int print_last_digit(int a)
{
	int i;

	i = a % 10;

	if (a < 0)
		i = -i;

	_putchar (i + '0');

	return (i);
}
