#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: value
 * Return: is void
 */

void puts_half(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
		;

	i++;
	for (x /= 2; str[x] != '\0'; x++)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
