#include "main.h"
/**
 * _strchr - program entry point
 * @s: input value
 * @c: input
 * Return: 0
 */
char *_strchr(char *s, char c)
{
	int a = 0;

	for (; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
			return (&s[a]);
	}
	return (0);
}
