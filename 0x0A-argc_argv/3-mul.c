#include <stdio.h>
#include <stdlib.h>
/**
 * main- main function
 * @argc: return count
 * @argv: return vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int sum;

	if (argc == 3)
	{
		sum = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", sum);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
