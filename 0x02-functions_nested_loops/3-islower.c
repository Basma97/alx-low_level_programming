#include "main.h"
/**
* _islower - checks if the character is in smaill letter or not
* @c : parameter to be checked
* Return: return 1 or 0
*/
int _islower(int c)
{
	char i = 'a';

	while (i < 'z')
	{
		if (i != c)
			i++;
		else
			break;
	}
	if (i == c)
		return (1);
	else
		return (0);

}
