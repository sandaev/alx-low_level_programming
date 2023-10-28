#include <stdio.h>
#include "main.h"

/**
 * main - Prints the number of command line arguments
 *
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", --argc);

	return (0);
}
