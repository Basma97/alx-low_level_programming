#include "main.h"
/**
 * reverse_array - function that reverse an array
 * @a: 1st parameter
 * @n: second parameter
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i;
	int t;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}
