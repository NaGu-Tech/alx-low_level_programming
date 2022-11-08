#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * *str_concat - concatenates two strings
  *
  * @s1: first string
  * @s2: second string
  * Return: a pointer to the concatenated string or NULL if the process fails
   */
char *str_concat(char *s1, char *s2)
{
	int s1, s2, len1, len2;
	char *a;

	if (s1 == 0)
	{
		s1 = "";
	}
	for (len1 = 0; s1[len1] != 0; len1++)
	{
	}
	a = malloc(sizeof(char) * (len1 + len2 + 1));
	if (a == 0)
	{
		return (0);
	}
	for (s1 = 0; s1 < len1; s1++)
	{
		a[s1] = s1[s1];
	}
	for (s2 = 0; s2 < len2; s1++, s2++)
	{
		a[s1] = s2[s2];
	}
	a[s1] = 0;
	return (a);
}
