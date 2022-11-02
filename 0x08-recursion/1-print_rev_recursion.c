#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line.
 * @s: string
 * Return: no return.
 */
void _puts_recursion(char *s)
{
	char *rev;
	rev = s;
	if (*rev != 0)
	{
		_print_rev_recursion(rev + 1);
		_putchar(*s);
	}
}
