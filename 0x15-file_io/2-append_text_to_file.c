#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: ...
 * @text_content: ...
 * Return: 1 (Success), or -1 (Failure)
 * 1 (If file exists), or -1 (If filename is NULL)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i, j, k = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (k = 0; text_content[k];)
			k++;
	}

	i = open(filename, O_WRONLY | O_APPEND);
	j = write(i, text_content, k);

	if (i == -1 || j == -1)
		return (-1);

	close(i);

	return (1);
}
