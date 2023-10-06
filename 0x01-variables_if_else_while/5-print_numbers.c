#include <stdio.h>
/**
 * main- Entry point
 *
 * Description: prints all single digit numbers of base 10
 *
 * Return: 0-successful
 */
int main(void)
{
	int a = 0;

	for (a = 0; a < 10; a++)
		printf("%d", a);
	printf("\n");
	return (0);
}
