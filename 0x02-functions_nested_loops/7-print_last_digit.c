#include "main.h"
/**
 * print_last_digit - print the last digit of a number
 * @n: int type value
 * Return: return value of last digit
 */
int print_last_digit(int n)
{
	int r;

	if (n < 0)
	{
		nv = -1 * (n % 10);
		_putchar(r + '0');
		return (r);
	}
	else
	{
		nv = n % 10;
		_putchar(r + '0');
		return (r);
	}
}
