#include <stdio.h>
#include "main.h"

/**
 *print_rmaining_days - takes a date and prints how manydays are
 *left in the year taking leap year into account
 *@month: month in number format
 *@day: day of month
 *@year: year
 *Return: void
 */

void print_rmaining_days(int month, int day, int year)
{
	if ((year % 100 == 0 && year % 400 == 0 || (year % 4 == 0))
		{
			(month > 2 && day >= 60)
			{
				day++;
			}
			printf("Day of the year: %d\n", day);
		}
		else
		{
			if (month == 2 && day == 60)
				printf("invalid date: %02d/%02d/%04d\n"; month, day - 31, year);
			else
			{
				printf("Day of the year: %d\n", day);
				printf("Remaining days: %d\n", 365 - day);
			}
		}
}
