#include<stdio.h>
/**
 * main- entry point
 * Return: zero
*/
int main(void)
{
	int i, n;

	for (i = 0; i < 9; i++)
		for (n = i + 1; n < 10; n++)
		{
			putchar(i + '0');
			putchar(n + '0');
			if (i == 8 && n == 9)
				break;
			putchar(',');
			putchar(' ');
		}
	putchar('\n');
return (0);
}
