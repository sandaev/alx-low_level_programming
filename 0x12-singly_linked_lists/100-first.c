#include "lists.h"

/**
 * start_func - Executes before main executes
 *
 * Description: This fucntion prints a string before the main
 * excutes
 *
 * Return: Nothing
 */
void start_func(void)
{
	char *str = "You're beat! and yest, you must allow,";
	char *str2 = "\nI bore my house upon my back!";

	printf("%s%s\n", str, str2);
}
