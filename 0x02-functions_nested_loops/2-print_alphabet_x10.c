#include "main.h"

/**
 * main - prints 10 times the alphabet, in lowercase, followed by a new line.
 * Description: You are not allowed to include standard libraries.
 * Return: 0 value on success
 */
void print_alphabet_x10(void)
{
	int l;
	char c;

	for (l = 0; l <= 10; l++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
