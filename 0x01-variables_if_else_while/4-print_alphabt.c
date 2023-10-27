#include <stdio.h>
/**
 * main- Entry point
 *
 * Description: program to print alphabet in lowercase excluding q and e
 *
 * Return: 0- success
 */
int main(void)
{
	char alphabet = 'a';

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet != 'e' && alphabet != 'q')
		{
			putchar(alphabet);
		}
	}
	putchar('\n');
	return (0);
}
