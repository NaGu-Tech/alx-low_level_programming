#include "main.h"

/**
  *_strlen - Finds the length of a sting.
  *@s: String pointer to string whose length is to be found
  *Return: returns the length of the string.
  */
int _strlen(char *s)
{
	int p = 0;
	/increment up to when the last character is NULL,\0/
		while (*(s + p) != 0)
		{
			p++;
		}
	return (p);
}
