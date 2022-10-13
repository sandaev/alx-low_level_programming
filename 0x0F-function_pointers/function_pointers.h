#ifndef function_pointers
int _puchar(char c);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, unsigned size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
#endif /* #ifndef */
