#include "main.h"
/**
 * times_table - function that print 9 table
 * Return: nothing
 */
void times_table(void)
{
	int i;
	int j;

	for (i = 0 ; i < 10 ; i++)
	{
		j = i * 9;
		_putchar (j + '0');
	}
}
