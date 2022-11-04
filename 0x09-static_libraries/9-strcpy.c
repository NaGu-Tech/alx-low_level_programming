#include "main.h"
#include <stdio.h>

/**
 *_strcpy - copies the pointed string by src
 *including the terminating null byte to the
 *buffer pointed to by dest.
 *@dest: destination
 *@src: source
 *Return: return dest
 */
char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (*(src + count) != '\0')
	{
		*(dest + count) = *(src + count);
		count++;
	}
	*(dest + count) = '\0';
	return (dest);
}
