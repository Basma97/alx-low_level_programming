#include<stdio.h>
/**
 * main- entry point
 * Return: 0
*/
int main(void)
{
	int i, n, k;

	for (i = 0; i < 8; i++)
		for (n = i + 1; n < 9; n++)
			for (k = n + 1; k < 10; k++)
			{
				putchar (i + '0');
				putchar (n + '0');
				putchar (k + '0');
				if (i == 7 && n == 8 && k == 9)
					break;
				putchar (',');
				putchar (' ');
			}
	putchar ('\n');
	return (0);
}
