#include "main.h"

/**
 * create_file - creates a file.
 * @filename: name of created file
 * @text_content: NULL terminated string to write to the file
 *
 * Return: -1 or 1
*/

int create_file(const char *filename, char *text_content)
{
		int c, w;

	c = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (c < 0 || !filename)
		return (-1);
	if (!text_content)
	{
		write(c, '\0', 1);
		return (1);
	}
	w = write(c, text_content, strlen(text_content));
	if (w < 0)
		return (-1);
	close(c);
	return (1);
}
