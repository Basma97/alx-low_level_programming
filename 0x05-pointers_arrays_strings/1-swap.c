#include "main.h"
/**
 * swap_int - swap two integers
 * @a: 1st parameter
 * @b:parameter
 * Return: return nothing
 */
void swap_int(int *a, int *b)
{
	int x = *a;

	*a = *b;
	*b = x;
}
