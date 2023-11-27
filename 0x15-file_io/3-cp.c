
#include "main.h"

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments passed to the program
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int f_r, f_w, x, m, n;
	char buf[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	f_r = open(argv[1], O_RDONLY);
	if (f_r < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	f_w = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((x = read(f_r, buf, BUFSIZ)) > 0)
	{
		if (f_w < 0 || write(f_w, buf, x) != x)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(f_r);
			exit(99);
		}
	}
	if (x < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	m = close(f_r);
	n = close(f_w);
	if (m < 0 || n < 0)
	{
		if (m < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_r);
		if (n < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_w);
		exit(100);
	}
