#include "main.h"

/**
  * leet - encodes a string into 1337
  *@s: The string to be encoded
  *
  * Return: returns the pointer to dest
  */
char *leet(char *s)
{
	int index = 0, i;
	int low_letters[] = {97, 101, 111, 116, 108};
	int upp_letters[] = {65, 69, 79, 84, 76};
	int numbers[] = {52, 51, 48, 55, 49};


	while (*(s + index) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(s + index) == low_letters[i] || *(s + index) == upp_letters[i])
			{
				*(s + index) = numbers[i];
				break;
			}
		}
		index++;
	}
	return (s);
}
