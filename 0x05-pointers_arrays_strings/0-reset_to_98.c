#include "main.h"
/**
 * reset_to_98 - function that change the pointer value
 * @n: takes a pointer and change its value
 * Return: return nothing
 */
void reset_to_98(int *n)
{
	int x = 98;
	n = &x;
	_putchar(*n + '0');
}
