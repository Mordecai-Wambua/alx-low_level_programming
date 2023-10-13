#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days -takes a date and prints how many days are
 * left in the year, taking leap years into account
 * @month: month in number format
 * @day: day of month
 * @year: year
 * Return: void
 */

void print_remaining_days(int month, int day, int year)
{
	int m_days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	if ((year % 4 == 0 || year % 400 == 0) && !(year % 100 == 0))
	{
		m_days[2] = 29;
		int y_day = day;

		if (month < 1 || month > 12 || day < 1 || day > mdays[month])
		{
			printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
		}
		for (int i = 1; i < month; i++)
		{
			y_day += m_days[i];
		}
		printf("Day of the year: %d\n", y_day);
		printf("Remaining days: %d\n", 366 - y_day);
	}
	else
	{
		if (month < 1 || month > 12 || day < 1 || day > mdays[month])
		{
			printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
		}

		int y_day = day;

		for (int i = 1; i < month; i++)
		{
			y_day += m_days[i];
		}

		printf("Day of the year: %d\n", y_day);
		printf("Remaining days: %d\n", 365 - y_day);
	}
}
