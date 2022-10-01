#include "main.h"
#include <stdio.h>
/**
 * main - Entry point, prints all arguments
 *
 * @argc: Arguments count
 *
 * @argv: Array of arguments
 *
 * Return: ALways 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return ();
}
