#include "main.h"

/**
 * read_textfile - reads a text file and prints int to the POSIX
 * standard output
 * @filename: pointer to actual file
 * @letters: number of letters to read and print
 * Return: actual number of letters read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	ssize_t r, w;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}

	f = open(filename, O_RDONLY);
	if (f == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		return (0);
	}
	r = read(f, buffer, letters);
	if (r == -1)
	{
		free(buffer);
		return (0);
	}
	w = write(STDOUT_FILENO, buffer, r);
	if (w == -1 || w != r)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(f);

	return (w);
}
