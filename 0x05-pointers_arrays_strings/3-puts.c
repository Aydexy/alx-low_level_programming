#include "main.h"
/**
 * _puts - print a string
 * @str: check for string
 * Return: 0 vaue on success
 */

void _puts(char *str)
{
	int x = 0;

	while (str[x])
	{
		puts(str[x]);
		x++;
	}
	puts('\n');
}
