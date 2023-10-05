#include <stdio.h>
#include <unistd.h>
/**
 * main- print out a string without printf or puts function
 *
 * Return: 1-error
 */
int main(void)
{
	char *str = "and that pieceof art is useful\" -Dora Korpar, 2015-10-19\n";

	while (*str)
		write(STDERR_FILENO, str++, 1);

	return (1);
}
