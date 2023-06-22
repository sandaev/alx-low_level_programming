#ifndef function_pointers
#include <stdlib.h>
int _putchar(char c);
void print_name(char *name, void (*f)(char *));
void array_iterator(char *name, unsigned size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
#endif /* function_pointers*/

	
