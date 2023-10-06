#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0- successful execution.
 */
int main(void)
{
	char alphabet = 'a';

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		putchar(alphabet);
	putchar('\n');
	return (0);
}
