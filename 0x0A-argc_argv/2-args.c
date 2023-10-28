#include <stdio.h>
#include "main.h"

/**
 * main - Prints command line aeguments
 *
 * @argc: Argument count
 * @argv: Arguemnt vector
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
