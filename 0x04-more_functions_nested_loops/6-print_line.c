#include "main.h"

/**
  *print_line -> a functiin that draws a line
  *@n: i put number of times to print '_'
  *Return: a straight line
  */

void print_line(int n)
{
	int x;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 1; x <= n; x++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
