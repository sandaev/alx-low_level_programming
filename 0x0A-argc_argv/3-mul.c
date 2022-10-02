#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point, multuplies two numbers
 *
 * @argc: Arguments count
 *
 * @argv: Array of arguments
 *
 * Return: Integer
 */
int main(int argc, char *argv[])
{
	/* Variable declaration and initialization */
	int prod, i;

	prod = i = 1;
	/*Check if exactly two args have been passed */
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for ( ; i < argc; i++)
		{
			prod *= atoi(argv[i]);
		}
		printf("%d\n", prod);
	}
	return (0);
}
