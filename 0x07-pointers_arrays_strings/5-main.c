#include "main.h"
#include <stdio.h>

/**
  * main - chexk thw code
  *
  * Return: Always 0.
  */
int main(void)
{
	char *s = "hello, world";
	char *f = "world";
	char *t;

	t = _strste(s, f);
	printf("%s\n", t);
	return (0);
}
