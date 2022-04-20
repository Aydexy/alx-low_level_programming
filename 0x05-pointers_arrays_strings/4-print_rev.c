#include "main.h"
/**
 * print_rev - a function that prints a string in reverse
 * @s: int type value
 * Return: 0 value on success
 */
void print_rev(char *s)
{
	int i = 0;

		for (i = 0; s[i] != '\0'; i++)
		{
		}
		for (i = i - 1; i >= 0; i--)
		{
			_putchar(s[i]);
		}
		_putchar('\n');
}
