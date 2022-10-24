#include "main.h"

/**
  *_strlen - Finds the length of a sting.
  *@s: String pointer to string whose length is to be found
  *Return: returns the length of the string.
  */
int _strlen(char *s)
{
	int p, q;

	q = 0;

	for (p = 0; s[p] != '\0'; p++)
	{
		q++;
	}

	return (q);
}
