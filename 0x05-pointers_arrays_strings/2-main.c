#include "main.h"
#include <stdio.h>

/**
  *main - chexk the code
  *
  *Return: Always 0.
  */
{
	char *str;
	int len;

	str = "My first strlen!";
	len = _strlen(str);
	printf("%d\n", len);
	return (0);
}
