#include "main.h"
#define BUFFER_SIZE 1024

/**
 * main - copies content of a file to another
 * @argc: argument counter
 * @argv: array
 *
 * Return: 0(success) exit(failure)
 */

int main(int argc, char *argv[])
{
	int source, final, r;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	}
	source = open(argv[1], O_RDONLY);
	if (source < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	final = open(argv[2], O_TRUNC | O_CREAT | O_WRONLY, 0664);
	while ((r = read(source, buffer, BUFFER_SIZE)) > 0)
	{
		if (final < 0 || (write(final, buffer, r) != r))
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
		}
	}
	if (r < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(source) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", source), exit(100);
	}
	if (close(final) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", final), exit(100);
	}
	return (0);
}
