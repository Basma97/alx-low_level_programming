#include "main.h"
/**
* print_sign- checks if the number is positive or negetive.
* @n: takes parameter
* Return: return 1 or 0 or -1
*/
int print_sign(int n)
{
	if (n == 0)
	{
		_putchar ('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar ('-');
		return (-1);
	}
	else
	{
		_putchar ('+');
		return (1);
	}
}
