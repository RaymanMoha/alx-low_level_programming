#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: pointer to the name of th file
 * @text_content: the NULL terminated string to add at the end of the file
 * Return: 1 on success, -1 on failure, or if filename is NULL
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, num = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (num = 0; text_content[num];)
			num++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, num);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
