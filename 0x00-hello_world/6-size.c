#include <stdio.h>
/**
 * main- prints the size of the various types
 * Return: 0-exit status
 */
int main(void)
{
	printf("Size of int: %lu bytes\n", sizeof(int));
	printf("Size of double: %lu bytes\n", sizeof(double));
	printf("Size of float: %lu bytes\n", sizeof(float));
	printf("Size of char: %lu bytes\n", sizeof(char));
	return (0);
}
