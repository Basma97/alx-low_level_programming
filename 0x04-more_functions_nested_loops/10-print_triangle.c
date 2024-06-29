#include "main.h"
/**
 * print_triangle - function that print triangle with #
 * @size: parameter
 * Return: nothing
 */
void print_triangle(int size)
{
	int i, count ,j;
	count = 1;

	for (i = 0; i < size; i++)
	{
		j = 0;
		while (j < count)
		{
			_putchar (' ');
			_putchar ('#');
			j++;
		}
			_putchar ('\n');
			count++;
	}
}
