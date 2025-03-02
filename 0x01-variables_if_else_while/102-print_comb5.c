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
			if (firstD != secondD)
			{
				putchar ((firstD / 10) + 48);
				putchar ((firstD % 10) + 48);
				putchar (' ');
				putchar ((secondD / 10) + 48);
				putchar ((secondD % 10) + 48);
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
