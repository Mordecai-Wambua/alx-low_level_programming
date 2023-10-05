#include <unistd.h>
/** 
 * main- prints a string
 *
 * Return: 1- error
 */
int main(void)
{
	const char message[] = "and that piece of art is useful\" -Dora Korpar, 2015-10-19\n";
	write(2, message, sizeof(message) - 1);
	return (1);
}
