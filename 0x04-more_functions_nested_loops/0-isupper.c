#include "main.h"
/**
 * _isupper - function that return if it is upper or not
 *@c: it takes integer.
 * Return: return 1 or 0
 */
int _isupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (0);
	else
		return (1);
}
