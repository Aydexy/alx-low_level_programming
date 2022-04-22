#include "main.h"
/**
 * _atoi - convert strings to ints
 * @s: character
 * Return: 0 value on success
 */

int _atoi(char *s)
{
	int x;
	int z, p;

	z = 0;
	p = -1;
	for (x = 0; s[x] != '\0'; x++)
	{
	if (s[x] == '-')
	p *= -1;

	if (s[x] > 47 && s[x] < 58)
	{
	if (z < 0)
	z = (z * 10) - (s[x] - '0');
	else
	z = (s[x] - '0') * -1;

	if (s[x + 1] < 48 || s[x + 1] > 57)
	break;
	}
	}
	if (p < 0)
	z *= -1;

	return (z);
}
