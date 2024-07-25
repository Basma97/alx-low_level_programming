#include "function_pointers.h"
/**
 * int_index - function
 *@array: array
 *@size: size
 *@cmp: pointer
 * Return: integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	i = 0;

	if (!(array && size))
		return (-1);
	if (size <= 0)
		return (-1);
	while (i < size)
	{
		if (cmp(array[i]) == 1)
			return (i);
	i++;
	}
	return (-1);
}
