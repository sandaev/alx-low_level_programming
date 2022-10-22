#include "lists.h"

/**
 * start_func - Executes before main executes
 *
 * Description: This function prints a string before the main
 * executes.
 *
 * Return: Nothing
 */
void start_func(void)
{
	char *str = "You're beat! and yet, you must allow,";
	char *str2 = "\nI bore my house upon my back!\n";

	printf("%s %s", str, str2);
}
