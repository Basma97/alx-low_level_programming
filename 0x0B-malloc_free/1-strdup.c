#include "main.h"
/**
 * _strdup - program
 * @str: parameter
 * Return: 0
 */
char *_strdup(char *str)
{
	int i;
	int count = 0;
	char *copy;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0' ; i++)
		count++;

	copy = malloc(sizeof(char) * count + 1);

	if (copy == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		copy[i] = str[i];

	return (copy);
}
