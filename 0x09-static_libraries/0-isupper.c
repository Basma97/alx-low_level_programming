#include "main.h"
/**
 * _isupper - check if uppercase letter
 * @c: parameter
 * Return: 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	return (0);
}
