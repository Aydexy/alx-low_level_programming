#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * followed by a new line.
 *
 * Return: void. no return.
 */

void more_numbers(void)
{
	int d = 0;
	int l = 0;

	while (l <= 10)
	{
		while (d <= 14)
		{
			_putchar(d);
			d++;
		}
		l = 0;
		_putchar(l + '0');
		l++;
	}
	_putchar('\n');
}
