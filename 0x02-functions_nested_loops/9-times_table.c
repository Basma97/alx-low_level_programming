#include "main.h"
/**
 * times_table - function that print 9 table
 * Return: nothing
 */
void times_table(void)
{
	int i, j, result;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 0; j < 10 ; j++)
		{
			result = j * i;
			if (j == 9)
				continue;

			if (result < 10)
			{
					_putchar(' ');
					_putchar(result + '0');
					_putchar(',');
                        		_putchar(' ');
				
			}
			else if (result > 9)
			{
				_putchar(result / 10 + '0');
				_putchar(result % 10 + '0');
				_putchar(',');
                        	_putchar(' ');
			}
		}
		_putchar('\n');
	}

}
