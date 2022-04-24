#include "main.h"

/**
 * string_toupper - a function that changes all lower string to upper
 * @n: input string
 * Return: capitialized string
 */
char *string_toupper(char *n)
{
	int x;

	for (x = 0; n[x] != '\0'; x++)
	{
		if (n[x] >= 'a' && n[x] <= 'z')
			n[x] = n[x] - 32;
	}
	return (n);
}
