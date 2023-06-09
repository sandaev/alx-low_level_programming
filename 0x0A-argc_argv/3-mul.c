#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int prod, num;

	prod = 1;
	if (argc != 3)
	{
		printf("Error\n");
	}
	else

	{
		while (--argc)
		{
			num = atoi(argv[argc]);
			prod *= num;
		}


		printf("%d\n", prod);
	}

	return (0);
}
