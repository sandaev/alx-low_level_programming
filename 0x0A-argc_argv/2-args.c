#include "main.h"
#include <stdio.h>

/**
 * main - Prints all arguments it receives
 *
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int c = 0;

	while (c < argc)
	{
		printf("%s\n", argv[c++]);
	}

	return (0);
}
