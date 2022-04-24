#include "main.h"

/**
 * _strcat - a function that concatenates two strings
 * @dest: copy to
 * @src: copy from
 * Return: two concat strings
 */
char *_strcat(char *dest, char *src)
{

	int x;
	int y;

	for (x = 0; dest[x] != '\0'; x++)
	{
	}

	for (y = 0; (dest[x + y] = *src++) != '\0'; y++)
	{
	}
	return (dest);
}
