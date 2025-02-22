#include<stdio.h>
/**
 * main- entry point
 * Return: zero
*/
int main(void)
{
	char i, n;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	for (n = 'A' ; n <= 'Z' ; n++)
	{
		putchar(n);
	}
	putchar('\n');
return (0);
}
