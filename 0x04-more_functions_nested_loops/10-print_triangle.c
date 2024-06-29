#include "main.h"
/**
 * print_triangle - function that print triangle with #
 * @size: parameter
 * Return: nothing
 */
void print_triangle(int size)
{
	int i, j;

	for (i = 1; i <= size; i++)
	{
		for (j = i ; j < size ; j++)
		{
			_putchar (' ');
		}
		for (j = 1; j <= i; j++)
		{
			_putchar ('#');
		}
	_putchar ('\n');
	}
}
