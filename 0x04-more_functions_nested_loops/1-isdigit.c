#include "main.h"
/**
 * _isdigit - function that checks if it is a digit
 * @c: takes a number as parameter
 * Return: 0 or 1
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return(1);
	else
		return(0);
}
