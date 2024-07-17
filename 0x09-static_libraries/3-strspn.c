#include "main.h"
/**
 * _strspn - program
 * @s: input
 * @accept:input
 * Return: 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int a;

	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
			if (*s == accept[a])
			{
				a++;
				break;
			}
			else if (accept[a + a] == '\0')
				return (a);
		}
		a++;
	}
	return (n);
}
