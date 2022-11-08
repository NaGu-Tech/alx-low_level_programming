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
	int i, len1, len2, len3;
	char *p;

	if (s1 == NULL)
		len1 = 0;
	else
		len1 = strlen(s1);

	if (s2 == NULL)
		len2 = 0;
	else
		len2 = strlen(s2);
	p = malloc((len1 + len2 + 1) * sizeof(char));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		p[i] = s1[i];
	for (i = 0; i < len2; i++)
		p[i + len1] = s2[i];

	len3 = strlen(p);
	p[len3] = '\0';

	return (p);
}
