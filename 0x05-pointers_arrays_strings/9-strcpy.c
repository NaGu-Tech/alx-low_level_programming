#include "main.h"
#include <stdio.h>

/**
  *_stcpy - copies the pointed string by src
  *including the terminating null byte to the 
  *buffer pointed to by dest.
  *@dest: destination
  *@src:the source
  *Return: the pointer to dest
  */
char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (count >= 0)
	{
		*(dest + count) = *(src + count);
		if (*(src + count) == '\n')
			break;
		count++;
	}
	return (dest);
}
