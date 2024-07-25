#include "function_pointers.h"
#include <stddef.h>
/**
 *array_iterator - function that return an array function
 *@array: array
 *@size: unsigned int
 *@action: pointer to a function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	i = 0;

	if (array && size && action)
		while (i <= size - 1)
		{
			action(*array++);
			i++;
		}
}
