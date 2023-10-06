#include <stdio.h>
/**
 * main- Entry point
 *
 * Description: print numbers of base 16 in lowercase
 *
 * Return: 0-successful
 */
int main(void)
{
	char l = 'a';
	int n = 0;

	for (n = 0; n < 10; n++)
		putchar('0' + n);
	for (l = 'a'; l < 'g'; l++)
		putchar(l);
	putchar('\n');
	return (0);
}
