#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Adds postive numbers
 *
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: Int
 */
int main(int argc, char *argv[])
{
	int sum, i;

	sum = 0;

	if (argc == 1)
		printf("%d\n", 0);
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]) == 0 || atoi(argv[i]) < 0)
			{
				printf("Error\n");
				return (1);
			}
			sum += atoi(argv[i]);
		}
	}
	printf("%d\n", sum);

	return (0);
}
