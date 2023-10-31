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
	int fb, count;

	count = open(filename, O_RDONLY | O_WRONLY | O_CREAT | O_TRUNC);

	if (!filename || count < 0)
		return (-1);

	if (!text_content)
	{
		write(count, '\0', 1);
		return (1);
	}

	fb = write(count, text_content, srtlen(text_content));

	if (fb < 0)
		return (-1);

	close(count);
	return (1);
}

