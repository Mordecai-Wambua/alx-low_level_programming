#include <stdio.h>
/**
 * main-Entry point
 *
 * Description: prints all single digit numbers of base 10
 *
 * Return: 0-successful
 */
int main(void)
{
	int n = 0;

	for (n = 0; n < 10; n++)
	{
	 putchar('0' + n);
	}
	putchar('\n');
	return (0);
}
