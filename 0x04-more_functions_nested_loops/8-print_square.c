#include "main.h"
/**
 * print_square - function that print square of #
 * @size: parameter square size
 * Return: nothing
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
		_putchar ('\n');

	for (i = 0; i < size ; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar ('#');
		}
		_putchar ('\n');
	}
}
