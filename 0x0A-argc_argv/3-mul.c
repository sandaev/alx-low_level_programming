#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Multplies two numbers
 *
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");

		return (1);
	}


	printf("%d\n", atoi(argv[argc - 2]) * atoi(argv[argc - 1]));

	return (0);
}

