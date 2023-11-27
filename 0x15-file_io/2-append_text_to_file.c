#include "main.h"

/**
 * append_text_to_file - apppends text to end of a file
 * @filename: pointer to name of the file
 * @text_content: string to be added
 *
 * Return: 1(success) -1(failure)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f, w;

	if (filename == NULL)
	{
		return (-1);
	}
	f = open(filename, O_WRONLY | O_APPEND);
	if (f == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		w = write(f, text_content, strlen(text_content));
		if (w == -1 || (size_t)w != strlen(text_content))
		{
			close(f);
			return (-1);
		}
	}
	close(f);
	return (1);
}
