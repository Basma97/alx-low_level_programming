#include "main.h"
/**
 * rev_string - function that reverse a string
 * @s: a parameter
 * Return: return nothing
 */
void rev_string(char *s)
{
	int i;
	int count = 0;
	char j;

	for (i = 0 ; s[i] != '\0' ; i++)
		count++;
	for (i = 0 ; i < count / 2 ; i++)
	{
		j = s[i];
		s[i] = s[count - 1 - i];
		s[count - 1 - i] = j;
	}
}
