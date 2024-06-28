#include "main.h"
/**
 * more_numbers - function that prints numbers 10 times
 * Return: nothing
 */
void more_numbers(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		for (j = 0 ; j < 10; j++)
		{
			_putchar (j + '0');
		}
		for (k = 10 ; k < 15; k++)
		{
			_putchar (k / 10 + '0');
			_putchar (k % 10 + '0');
		}
		_putchar ('\n');
	}
}
