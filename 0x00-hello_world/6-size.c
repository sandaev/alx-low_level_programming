#include <stdio.h>
/*
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %d%s\n", (unsigned) sizeof(char), " byte(s)");
	printf("Size of an int: %d%s\n", (unsigned) sizeof(int), " byte(s)");
	printf("Size of a long int: %d%s\n", (unsigned) sizeof(long int), " byte(s)");
	printf("Size of a long long int: %d%s\n", (unsigned) sizeof(long long int), " byte(s)");
	printf("Size of a float: %d%s\n", (unsigned) sizeof(float), " byte(s)");
	return (0);
}
