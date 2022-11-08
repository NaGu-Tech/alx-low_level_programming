#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * *str_concat - function to allocate space for string concatenation
  *
  * @s1: array pointer to destination of string
  * @s2:array pointer to source of  string
  * Return: returm pointer to copy a string
   */
char *str_concat(char *s1, char *s2)
{
	char *ptr
	int size1, size2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	size1 = _strlen(s1);
	size2 = _strlen(s2);

	ptr = malloc(((size1 + size2) + 1) * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	_strncat(ptr, s1, size1);
	_strncat(ptr, s2, size2);
	ptr += '\0';
	return (ptr);
}
