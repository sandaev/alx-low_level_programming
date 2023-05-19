#include <stdio.h>
/**
 * main - Prints numbers less than 10
 *
 *
 * Return: Always 0
 */
int main(void)
{
	int num;

	num = 0;
	while (num < 10)
	{
		printf("%d", num);
		num++;
	}
	printf("\n");

	return (0);
}
