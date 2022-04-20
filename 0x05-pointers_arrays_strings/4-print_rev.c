#include "main.h"
/**
 * print_rev - a function that prints a string in reverse
 * @s: int type value
 * Return: 0 value on success
 */

void print_rev(char *s)
{
	int x = 0;

		for (x = 0; s[x] != '\0'; x++)
		{
		}
		for (x = x - 1; x >= 0; x--)
		{
			_putchar(s[x]);
		}
		_putchar('\n');
}
