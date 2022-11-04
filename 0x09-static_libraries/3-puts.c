#include "main.h"

/**
  *_puts - prints a string
  *@str: string to print
  *
  *Description: prints a string
  *Return: prints the number of a character
  */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
