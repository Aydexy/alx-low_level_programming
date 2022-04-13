#include "main.h"

/**
 * main - print_alphabet_x10
 * Description: You are not allowed to include standard libraries.
 * Return: 0 value on success
 */
void print_alphabet_x10(void)
{
	int l;
	char c;

	for (l = 0; l < 10; l++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
