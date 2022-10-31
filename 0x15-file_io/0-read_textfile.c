#include "main.h"

/**
 * read_textfile - reads a text file and prints
 * it to the POSIX standard output
 *
 * @filename: pointer to file
 * @letters: number of letters to read and print
 * Return: Number of letters that can be read
 * and printed; 0 otherwise
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, wr;
	ssize_t count;
	char *buf;
	const char *bf;

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY, 0200);
	if (fd == -1 || filename == NULL)
	{
		return (0);
	}
	/* read file */
	count = read(fd, buf, letters);
	if (count == -1)
	{
		return (0);
	}
	close(fd);
	bf = buf;
	wr = write(1, bf, letters);
	if (wc == -1)
	{
		return (0);
	}
	free(buf);
	return (count);
}
