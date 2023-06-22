#include "function_pointers.h"
/**
 * print_name - Prints a name
 *
 * @name: Name to print
 *
 * @f:Function pointer
 *
 * Return: Nothing
 */
void print_name(char *name, void(*f)(char *))
{
	f(name);
}
