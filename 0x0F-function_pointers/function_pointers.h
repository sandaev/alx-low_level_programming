#ifndef FUNCTION_POINTERS
#define FUNCTION_POINTERS
int _putchar(char c);
void print_name(char *, void (*f)(char *))l
void array_iterator(int *array, unsigned size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif /* #ifndef */
