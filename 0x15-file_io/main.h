#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

#ifndef MAINH
#define MAINH
int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);

#endif /* #ifndef MAINH */

