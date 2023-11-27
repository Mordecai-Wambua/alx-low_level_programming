#include "main.h"
#include <sys/stat.h>
#include <string.h>
#include <fcntl.h>

/**
 * create_file - creates a file
 * @filename: pointer to the file name
 * @text_content: pointer to string to write to file
 *
 * Return: 1 (success) -1 (failure)
 */
int create_file(const char *filename, char *text_content)
{
	int f, w;

	if (filename == NULL)
	{
		return (-1);
	}
	f = open(filename, O_CREAT | O_WRONLY | O_TRUNC | 0600);
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
