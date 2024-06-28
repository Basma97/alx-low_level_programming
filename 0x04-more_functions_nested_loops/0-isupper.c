#include "main.h"
/**
 * _isupper - function that return if it is upper or not
 *@c: it takes integer.
 * Return: return 1 or 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
