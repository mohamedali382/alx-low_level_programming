#include "main.h"
#include "string.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the created file
 * @text_content: length of the inputs in file
 *
 * Return: -1 or 1
*/

int append_text_to_file(const char *filename, char *text_content)
{
		int c, w;

	c = open(filename, O_WRONLY | O_APPEND);
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
