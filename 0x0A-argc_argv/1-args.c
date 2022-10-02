#include "main.h"
#include <stdio.h>
/**
 * main - Entry point, prints the number of arguments passed
 *
 * @argc: Arguments count
 *
 * @argv: Array of command line arguments
 *
 * Return: Always 0
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	/* Prints the number of arguments passed */
	printf("%d\n", (argc - 1));
	return (0);
}
