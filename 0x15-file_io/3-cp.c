#include "main.h"
#include <stdio.h>
/**
 * copy_content - This program copies the content of a file
 * toanother file. It takes two command line arguments
 * file_from and file_to.
 * @file_from: pointer to file to from
 * @file_to: pointer to copy to
 * Return: Nothing
 */
int file_exist(const char*);
void copy_content(const char *file_from, const char *file_to)
{
	int fd_frm, fd_to, r_frm, w_to;
	int frm_exists;
	char *r_buf;

	frm_exists = file_exist(file_from);
	fd_frm = open(file_from, O_RDWR);
	if (!frm_exists || fd_frm < 0)
	{
		dprintf(2, "Error: Can't read file %s\n", file_from);
		exit(98);
	}
	r_buf = malloc(sizeof(char) * 1024);
	if (r_buf == NULL)
	{
		dprintf(2, "Error: Can't read file %s\n", file_from);
		exit(98);
	}
	r_frm = read(fd_frm, r_buf, 1024);
	if (r_frm < 0)
	{
		dprintf(2, "Error: Can't read file %s\n", file_from);
		exit(98);
	}
	if (close(fd_frm) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd_frm);
		exit(100);
	}
	if (file_exist(file_to))
	{
		fd_to = open(file_to, (O_RDWR | O_TRUNC));
	}
	else
	{
		fd_to = open(file_to, (O_CREAT | O_RDWR), 00664);
	}
	if (fd_to < 0)
	{
		dprintf(2, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	w_to = write(fd_to, r_buf, 1024);
	if (w_to < 0)
	{
		dprintf(2, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	free(r_buf);
	if (close(fd_to) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
}
/**
 * file_exist - checks if file exists or not
 * @filename: pointer to file
 * Return: 1 if file exists, 0 otherwise
 */
int file_exist(const char *filename)
{
	if (filename == NULL || *filename == '\0')
	{
		return (0);
	}
	if (open(filename, O_RDWR) > 0)
	{
		return (1);
	}
	return (0);
}
/**
 * main - checks code
 * @ac: command line argument, counts number of args
 * passed
 * @av: array of strings
 * Return: Always 0
 */
int main(int ac, char **av)
{
	if (ac < 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	copy_content(av[1], av[2]);
	return (0);
}

