#include "function_pointers.h"

/**
 *print_name - function that return name
 *@name: pointer
 *@f: pointer to a function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
