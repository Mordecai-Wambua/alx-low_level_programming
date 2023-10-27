#include <stdio.h>
/**
 * main- Entry point
 *
 * Description: print lowercase alphabet in reverse
 *
 * Return: 0- successful
 */
int main(void)
{
	char alpha = 'z';

	for (alpha = 'z'; alpha >= 'a'; alpha--)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
