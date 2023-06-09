#include "main.h"
#include <stdio.h>

/**
 * main - Prints the number of arguments paased into it
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
