#include "main.h"
/**
 * create_file - Creates a file
 * @filename: pointer to file name
 * @text_content: pointer to text to
 * be written in file
 * Return: ! 0n success, -1 otherwise
 */
int create_file(const char *filename, char *text_content)
{
	int fd, fw, fexist;

	fexist = 0;
	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		fd = open(filename, (O_CREAT | O_RDWR), 0600);
		if (fd == -1)
		{
			return (-1);
		}
		close(fd);
		return (1);
	}
	if (open(filename, (O_RDWR | O_TRUNC) > 0))
	{
		fd = open(filename, (O_RDWR | O_TRUNC));
		fw = write(fd, text_content, strlen(text_content));
		fexist = 1;
	}
	if (!fexist)
	{
		fd = open(filename, (O_CREAT | O_RDWR), 0600);
		if (fd == -1)
		{
			return (-1);
		}
		fw = write(fd, text_content, strlen(text_content));
	}
	if (fw < 0)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
