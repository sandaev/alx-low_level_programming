#include "main.h"

/**
 * append_text_to_file - function that appends
 * text at the end of a file
 * @filename: pointr t filename
 * @text_content: pointer to content to be
 * appended
 * Return: 1 on succes, -1 otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, fw;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, (O_APPEND | O_RDWR), 0600);
	if (fd == -1)
	{
		return (-1);
	}
	if (fd > 0)
	{
		if (text_content == NULL)
		{
			close(fd);
			return (1);
		}
		fw = write(fd, text_content, strlen(text_content));
		if (fw < 0)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
