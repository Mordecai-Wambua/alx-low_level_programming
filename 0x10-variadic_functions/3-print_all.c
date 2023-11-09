#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: datatypes of arguments
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	char *s, *d = "";
	unsigned int i = 0;

	va_start(ap, format);
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", d, va_arg(ap, int));
				break;
			case 'i':
				printf("%s%d", d, va_arg(ap, int));
				break;
			case 'f':
				printf("%s%f", d, va_arg(ap, double));
				break;
			case 's':
				s = va_arg(ap, char *);
				if (s == NULL)
				{
					s = "(nil)";
				}
				printf("%s%s", d, s);
				break;
			default:
				i++;

				continue;
		}
		d = ", ";
		i++;
	}
	va_end(ap);
	printf("\n");
}
