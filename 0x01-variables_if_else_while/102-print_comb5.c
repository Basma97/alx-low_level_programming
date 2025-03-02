#include<stdio.h>
/**
 * main- main function
 * Return: Return 0
*/
int main(void)
{
	int firstD, secondD;

	firstD = 0;

	while (firstD <= 99)
	{
		secondD = firstD;
		while (secondD <= 99)
		{
			if (secondD != firstD)
			{
				putchar ((firstD / 10) + '0');
				putchar ((firstD % 10) + '0');
				putchar (' ');
				putchar ((secondD / 10) + '0');
				putchar ((secondD % 10) + '0');
				if (firstD !=  98 || secondD != 99)
				{
					putchar (',');
					putchar (' ');
				}
			}
			secondD++;
		}
		firstD++;
	}
	return (0);
}
