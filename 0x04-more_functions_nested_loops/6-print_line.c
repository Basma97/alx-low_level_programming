#include "main.h"
/**
 * print_line - function that print line
 * @n:takes the numbers of _to be printed
 * Return: return nothing
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n <= 0)
			_putchar ('\n');

		_putchar ('_');
	}
	_putchar('\n');
}
