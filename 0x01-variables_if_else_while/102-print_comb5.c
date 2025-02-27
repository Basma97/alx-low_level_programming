#include<stdio.h>
/**
 * main- main function
 * Return: Return 0
*/
int main(void)
{
	int i, n, k, l;

	for (i = 0; i < 10; i++)
	{
		for (n = 0; n < 9; n++)
		{
			for (k = 0; k < 10; k++)
			{
				for (l = n; l < 10; l++)
				{
					putchar(i + '0');
					putchar(n + '0');
					putchar(' ');
					putchar(k + '0');
					putchar(l + '0');
					if (i == 9 && n == 8 && k == 9 && l == 9)
						break;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
