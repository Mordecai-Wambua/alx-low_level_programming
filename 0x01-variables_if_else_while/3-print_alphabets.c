#include <stdio.h>
/**
 * main- entry point
 *
 * Description: program to print alphabet in lower and uppercase
 *
 * Return: 0 -exit code
 */
int main(void)
{
	char alphal, alphau;
	alphal = 'a';
	alphau = 'A';

	for (alphal = 'a'; alphal <= 'z'; alphal++)
		putchar(alphal);
	for (alphau = 'A'; alphau <= 'Z'; alphau++)
		putchar(alphau);
	putchar('\n');
	return (0);
}
