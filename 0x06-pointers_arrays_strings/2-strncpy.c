#include "main.h"

/**
 * _strncpy - a function that copies a string
 * @dest: copy to
 * @src: copy from
 * @n: input number of char
 * Return: 0 value on Success
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; src[x] != '\0'; x++)
		if (x < n)
			dest[x] = src[x];
	while (x < n)
		dest[x++] = '\0';

	return (dest);
}
