#include <stdlib.h>

#ifndef MAINH
#define MAINH
unsigned int binary_to_unit(const char *b);
int _putchar(char c);
int _strlen(const char *str);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
#endif /*#ifndef*/
