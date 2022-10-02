#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - ENtry point
 *
 * @argc: argument count
 *
 * @argv: Array of aruments
 *
 * Return: Integer
 */
int main(int argc, char *argv[])
{
	int sum, i, j;
	char c;

	sum = 0;
	i = 1;
	j = 0;
	/* check if no argument is given */
	if (argc == 1)
	{
		printf("%d\n", 0);
	}
	if (argc > 1)
	{
		for ( ; argv[i]; i++)
		{
			for (j = 0; argv[i][j]; j++)
			{
				c = argv[i][j];
				if (!(isdigit(c)))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}

