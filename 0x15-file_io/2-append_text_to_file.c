#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the created file
 * @text_content: length of the inputs in file
 *
 * Return: -1 or 1
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fb, w;

	fb = open(filenme, O_WRONLY | O_APPEND);

	if (!filename || fb < 0)
		return (-1);

	if (!text_content)
	{
		write(fb, '\0', 1);
		return (1);
	}

	w = write(fb, text_content, sizeof(text_content);
	if (w < 0)
		return (-1);
	close(fb);
	return (1);
}
